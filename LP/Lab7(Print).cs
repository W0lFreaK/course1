using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//6. Журнал, книга, печатное издание, учебник. 
namespace ConsoleApplication22
{
    abstract class Print
    {
        public string name { get; set; }
        public string format { get; set; }
        public Print(string temp)
        {
            name = temp;
            format = "";
        }
        public Print()
        {
            Console.WriteLine("Введите название");
            name = Console.ReadLine();
            Console.WriteLine("Введите формат");
            format = Console.ReadLine();
        }
        public override string ToString()
        {
            return name + " " + " " + format + " ";
        }
        public void search(string temp)
        {
            if (temp == this.ToString())
            {
                Console.WriteLine(this.ToString());
            }
        }
    }

    class BOOK : Print
    {
        public string category { get; set; }
        public string seria { get; set; }
        public string author { get; set; }
        public BOOK() : base()
        {
            Console.WriteLine("Введите категорию");
            category = Console.ReadLine();
            Console.WriteLine("Введите серию");
            seria = Console.ReadLine();
        }
        public BOOK(string value, string var) : base(var)
        {
            category = "";
            seria = "";
            author = value;
        }
        public override string ToString()
        {
            return base.ToString() + category + " " + seria + " ";
        }
    }

    class journal : Print
    {
        public DateTime date { get; set; }
        public void ReadDate()
        {
            Console.WriteLine("Введите дату");
            string temp = Console.ReadLine();
            try
            {
                date = DateTime.Parse(temp);
            }
            catch
            {
                Console.WriteLine("Input Error");
            }
        }
        public journal() : base()
        {
            Console.WriteLine("Введите дату");
            ReadDate();
        }
        public override string ToString()
        {
            return base.ToString() + date.ToString() + " ";
        }
    }

    class ucheb : BOOK
    {
        private string name_science
        {
            get;
            set;
        }
        private string KLASS;
        public string klass
        {
            get { return this.KLASS; }
            set
            {
                int temp = 0;
                try
                {
                    temp = Convert.ToInt32(value);
                }
                catch
                {
                    throw new FormatException();
                }
                if (temp > 11) throw new FormatException();
                else KLASS = value;
            }
        }
        public ucheb() : base()
        {
            Console.WriteLine("Введите название науки");
            name_science = Console.ReadLine();
            Console.WriteLine("Введите класс");
            klass = ReadNum();
        }
        public string ReadNum()
        {
            string temp = Console.ReadLine();
            for (int i = 0; i < temp.Length; i++)
            {
                if (temp[i] < '0' || temp[i] > '9')
                    throw new FormatException();
            }
            if (Convert.ToInt32(temp) > 11) throw new FormatException();
            else return temp;
        }
        public override string ToString()
        {
            return base.ToString() + name_science + " " + klass + " ";
        }
    }

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
            libr = new ucheb[n];
        }
    }
}
