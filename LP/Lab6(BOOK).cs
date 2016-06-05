using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication21
{
    class BOOK
    {
        private string NAME;
        private string AUTHOR;
        private string YEAR;
        private string KAT;
        //свойства
        public string name
        {
            get { return this.NAME; }
            set { this.NAME = value; }
        }
        public string author
        {
            get { return this.AUTHOR; }
            set { this.AUTHOR = value; }
        }
        public string year
        {
            get { return this.YEAR; }
            set
            {
                int temp=0;
                for (int i = 0; i < value.Length; i++)
                {
                    if (value[i] >= '0' && value[i] <= '9')
                    {
                        temp += Convert.ToInt32(value[i])-'0';
                        temp *= 10;
                    }
                    else throw new FormatException();
                }
                temp /= 10;
                if (temp > 2016) throw new FormatException();
                else YEAR = value;
            }

        }
        public string kat
        {
            get { return this.KAT; }
            set { this.KAT = value; }
        }
        //конструктор
        public BOOK()
        {
            name = "";
            author = "";
            year = "0";
            kat = "";
        }
        //заполнение данных
        public void read()
        {
            Console.WriteLine("Введите название книги");
            name = Console.ReadLine();
            Console.WriteLine("Введите автора");
            author = Console.ReadLine();
            Console.WriteLine("Введите год");
            year = Console.ReadLine();
            Console.WriteLine("Введите категорию");
            kat = Console.ReadLine();
            Console.Clear();
        }
        //поиск
        //деструктор
        ~BOOK()
        {
            Console.WriteLine("Book delete!");
        }
        public override string ToString()
        {
            return name + " " + author + " " + kat + " " + year;
        }
    }
}

