using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication21
{
    class Library
    {
        private BOOK[] libr;
        public BOOK this[int i]
        {
            get
            {
                if (i >= libr.Length || i < 0) throw new IndexOutOfRangeException();
                else return (BOOK)libr[i];
            }
            set
            {
                libr[i] = value;
            }
        }
        public Library(int n)
        {
            libr = new BOOK[n];
        }
        public void add()
        {
            Console.WriteLine("Введите количество книг");
            int n = Program.ReadNum(Console.ReadLine());
            int length = libr.Length;
            Array.Resize<BOOK>(ref libr, libr.Length + n);
            for (int i = length; i < libr.Length; i++)
            {
                this[i] = new BOOK();
                this[i].read();
            }

        }
        public void show()
        {
            int n = Program.ReadNum(Console.ReadLine()) - 1;
            Console.WriteLine(this[n].ToString());
        }
        public void ShowAll()
        {
            foreach (var i in libr)
            {
                Console.WriteLine(i.ToString());
            }
        }
        public void search()
        {
            string temp = Console.ReadLine();
            for (int i = 0; i < libr.Length; i++)
            {
                if (this[i].ToString().IndexOf(temp) != -1)
                    Console.WriteLine(this[i].ToString());
            }

        }
        public void del()
        {
            int k = Program.ReadNum(Console.ReadLine());
            this[k] = null;
        }
        //aut year kat
        public void sort()
        {
            Console.WriteLine("Критерий сортировки: \n 1- Год \n 2- Автор \n 3- Категория");
            int n = Program.ReadNum(Console.ReadLine());
            switch (n)
            {
                case 1:
                    for (int k = libr.Length - 1; k > 0; k--)
                        for (int i = 0; i < k; i++)
                            if (Convert.ToInt32(this[i].year) > Convert.ToInt32(this[i + 1].year))
                            {
                                BOOK buf = this[i];
                                this[i] = this[i + 1];
                                this[i + 1] = buf;
                            }
                    break;
                case 2:
                    for (int k = libr.Length - 1; k > 0; k--)
                        for (int i = 0; i < k; i++)
                            if (this[i].author.CompareTo(this[i+1].author)>0)
                            {
                                BOOK buf = this[i];
                                this[i] = this[i + 1];
                                this[i + 1] = buf;
                            }
                    break;
                case 3:
                    for (int k = libr.Length - 1; k > 0; k--)
                        for (int i = 0; i < k; i++)
                            if (this[i].kat.CompareTo(this[i + 1].kat) > 0)
                            {
                                BOOK buf = this[i];
                                this[i] = this[i + 1];
                                this[i + 1] = buf;
                            }
                    break;
                default:
                    {
                        throw new FormatException();
                    }
            }
        }

        ~Library()
        {
            Console.WriteLine("Clear!");
        }
    }
}
