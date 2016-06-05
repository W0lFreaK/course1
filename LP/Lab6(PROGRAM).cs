using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication21
{
    class Program
    {
        public static int ReadNum(string d)
        {
            int n=0;
            while (n == 0)
                try
                {
                    n = Convert.ToInt32(d);
                }
                catch
                {
                    Console.WriteLine("Input Error");
                    Console.ReadLine();
                }
            return n;
        }
        public static int prev(Library lib)
        {
            while (true)
            {
                Console.WriteLine("Выберите действие");
                Console.WriteLine("1-Добавить книгу");
                Console.WriteLine("2-Поиск");
                Console.WriteLine("3-Удалить книгу");
                Console.WriteLine("4-Отобразить книгу");
                Console.WriteLine("5-Отобразить весь список книг");
                Console.WriteLine("6-sort");
                Console.WriteLine("7-exit");
                int n = ReadNum(Console.ReadLine());
                switch (n)
                {
                    case 1: lib.add(); break;
                    case 2: lib.search(); break;
                    case 3: lib.del(); break;
                    case 4: lib.show(); break;
                    case 5: lib.ShowAll(); break;
                    case 6: lib.sort(); break;
                    case 7: return 0;
                }
            }
        }
        static void Main(string[] args)
        {
            Library HomeLib = new Library(0);
            prev(HomeLib);
        }
    }
}
