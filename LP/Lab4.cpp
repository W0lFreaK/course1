using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
namespace ConsoleApplication12
{
    class Program
    {

        static void graph()
        {
            /*График*/
            double n, r;
            String str, strr;
            str = Console.ReadLine();
            strr = Console.ReadLine();
            try
            {
                n = Convert.ToDouble(str);
                r = Convert.ToDouble(strr);
            }
            catch
            {
                Console.WriteLine("Возникло исключение");
                return;
            }
            if (n < -r-2) Console.WriteLine("{0} ",-r);
            else
            if (n >= -r-2 && n <= -r) Console.WriteLine("{0}", n + r);
            else
            if (n > -r && n <= r) Console.WriteLine("{0}", Math.Sqrt(r * r - n * n));
            else
            if (n > r && n < r+5) Console.WriteLine("{0}", r/5.0*(n)-r*r/5.0);
            else
                Console.WriteLine("{0}",r);
        }
        static void zivotnie()
        {
            /*Составить алгоритм решения задачи: сколько можно купить быков, коров и телят, платя за быка 10 руб., за корову — 5 руб., а за теленка — 0,5 руб., если на 100 руб.надо купить 100 голов скота? */
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    for (int k = 0; k < 200; k++)
                    {
                        if (i + j + k == 100 && i * 10 + j * 5 + k * 0.5 == 100)
                        {
                            Console.WriteLine("Bykov {0}, Korov {1}, Telyat {2}", i, j, k);
                        }
                    }
                }
            }
        }
        static void sumsin()
        {
            /*дано число n,x сосчитать S=sinx+sinsinx+...*/
            int n;
            double s = 0, x,y=0;
            String str = Console.ReadLine(), str1 = Console.ReadLine();
            try
            {
                n = Convert.ToInt32(str);
                x = Convert.ToDouble(str1);
            }
            catch
            {
                Console.WriteLine("Возникло исключение");
                return;
            }
            if (n != 0) y = Math.Sin(x);
            s+= y;
            for (int i = 1; i < n; i++)
            {
                //Console.WriteLine("{0}", Math.Sin(s));
                y = Math.Sin(y);
                s += y;
            }
            Console.WriteLine(s);
        }
        static void arr1()
        {/*В одномерном массиве, состоящем из n вещественных элементов, вычислить: 
            • минимальный элемент массива; 
            • сумму элементов массива, расположенных между первым и последним положительными элементами. 
            Преобразовать массив таким образом, чтобы сначала располагались все элементы, равные нулю, а потом — все остальные. */

            const int n = 11;
            double sum = 0;
            double[] arr = new double[n];
            int nmin = 0, npolF = -1, npol = -1;
            Random rnd = new Random();
            for (int i = 0; i < n; i++)
            {
                arr[i] = Convert.ToDouble(rnd.Next(10000)) / 100 * rnd.Next(-1, 2);
                Console.WriteLine("{0}", arr[i]);
                if (arr[i] < arr[nmin]) nmin = i;
                if (arr[i] > 0 && npolF == -1) { npolF = i; }
                else
                {
                    if (arr[i] > 0) npol = i;
                }
            }
            Console.WriteLine("Min= {0}", arr[nmin]);
            for (int i = npolF; i <= npol; i++)
            {
                sum += arr[i];
            }
            Console.WriteLine("Sum= {0}", sum);
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = arr[k];
                    arr[k] = 0;
                    k++;
                }

            }
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine(arr[i]);
            }
        }
        static void arr2()
        {
            /*Дана целочисленная прямоугольная матрица.
           Определить: 
           • сумму элементов в тех строках, которые содержат хотя бы один отрицательный элемент; 
           • номера строк и столбцов всех седловых точек матрицы.
           Матрица А имеет седловую точку Аij, если Аij является минимальным элементом в i-й строке и максимальным — в j-м столбце. 7*/
            const int n = 3;
            int[,] arr = new int[n, n + 5];
            int sum = 0, nmin = 0;
            int j, i;
            bool b = false;
            Random rnd = new Random();
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n + 5; j++)
                {
                    arr[i, j] = rnd.Next(-100, 100) * rnd.Next(-1, 2);
                    Console.Write("{0} \t", arr[i, j]);
                    if (arr[i, j] < 0) b = true;
                    sum += arr[i, j];
                }
                Console.WriteLine();
                if (b) Console.WriteLine("Sum in line= {0}", sum); else Console.WriteLine("Negative number not found");
                b = false;
                sum = 0;
            }
            b = false;

            for (j = 0; j < n + 5; j++)
            {
                for (i = 0; i < n; i++)
                {
                    if (arr[i, j] < arr[nmin, j]) { nmin = i; }
                }
                for (int k = 0; k < n + 5 && !b; k++)
                {
                    b=arr[nmin, k] > arr[nmin, j] ;
                }

                if (!b) Console.WriteLine("Седловая точка {0},{1} ", i, j);
                b = false;
            }
        }
        static void str()
        {
            System.IO.StreamReader file = new System.IO.StreamReader("lab4.txt");
            String text = "";
            while (!file.EndOfStream)
            {
                text = file.ReadLine();
                if (text.IndexOf(',') == -1) Console.WriteLine(text);
            }
            file.Close();

        }
        static void Main(string[] args)
        {
            Console.ForegroundColor = ConsoleColor.Green;
             graph();
            //zivotnie();
            //sumsin();
            //arr1();
            //arr2();
            //str();
        }
    }
}
