using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication22
{
    class Program
    {
        static void Main(string[] args)
        {

            //   Array<Print> lis = new List<Print>();
            Print[] arr = new Print[0];

            // Array arr = Array.CreateInstance(typeof(Print), 0);
            int n = 5;
            Array.Resize<Print>(ref arr, arr.Length + n);
            Console.WriteLine("книга");
            BOOK temp2 = new BOOK();
            Console.WriteLine(temp2.ToString());
            Console.WriteLine();
            Console.WriteLine("журнал");
            journal temp3 = new journal();
            Console.WriteLine(temp3.ToString());
            Console.WriteLine();
            Console.WriteLine("учебник");
            ucheb temp4 = new ucheb();
            Console.WriteLine(temp4.ToString());
            arr[0] = temp2;
            arr[1] = temp3;
            arr[3] = temp4;
            foreach(var i in arr)
            {
                i.search("asdas");
            }
        }
    }
}
