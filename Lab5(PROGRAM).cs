using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication15
{

    class Program
    {
        static int prev(List<NOTE> lis)
        {
            while (true)
            {
                Console.WriteLine("Введите номер команды: ");
                Console.WriteLine("1- Добавить N пользователей ");
                Console.WriteLine("2- Вывести список ");
                Console.WriteLine("3- Изменить запись ");
                Console.WriteLine("4- Ввести год поиска ");
                Console.WriteLine("5- Выход");
                int n = NOTE.readnum();
                switch (n)
                {
                    case 1: NOTE.enter(ref lis); break;
                    case 2: NOTE.Show(lis); break;
                    case 3: int d = 0; d = NOTE.readnum() - 1; if (lis.Count == 0 || d >= lis.Count) Console.WriteLine("Error"); else lis[d].read(); break;
                    case 4: NOTE.showYear(lis); break;
                    case 5: return 0;
                }
            }
        }
        static void Main(string[] args)
        {
            List<NOTE> lis = new List<NOTE>();
            prev(lis);
        }

    }
}

