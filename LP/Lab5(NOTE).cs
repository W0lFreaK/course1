using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication15
{
    class NOTE
    {
        private string FIO;
        private string PHONE;
        private DateTime DATE;
        public string fioGET()
        {
            return FIO;
        }
        public void fioSET(string value)
        {
            FIO = value;
        }
        public string phoneGET()
        {
            return PHONE;
        }
        public void phoneSET(string value)
        {
            PHONE = "0";
            bool flag = false;
            if (value[0] != '+' && (value[0] < '0' || value[0] > '9')) flag = true;
            for (int i = 1; i < value.Length; i++)
            {
                if (value[i] < '0' || value[i] > '9')
                {
                    flag = true;
                }
            }
            if (!flag) PHONE = value;
            else Console.WriteLine("Input error");

        }
        public DateTime dateGET()
        {
            return DATE;
        }
        public void dateSET(string value)
        {
            bool Flag = false;
            while (!Flag)
            { 
                try
                {
                    this.DATE=DateTime.Parse(value);
                    Flag = true;
                }
                catch (ArgumentException)
                {
                    Console.Clear();
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Ошибка ввода. Повторите ввод");
                    Console.ForegroundColor = ConsoleColor.White;
                    value=Console.ReadLine();
                }
                catch (FormatException)
                {
                    Console.Clear();
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Ошибка ввода. Повторите ввод");
                    Console.ForegroundColor = ConsoleColor.White;
                    value = Console.ReadLine();
                }
        }
    }
        //конструктор
        public NOTE()
        {
            FIO = "";
            phoneSET("0");
            DATE = new DateTime();
        }
        public NOTE(string s)
        {
            FIO = s;
            phoneSET("");
            DATE = new DateTime();
        }
        public NOTE(string s, string k)
        {
            FIO = s;
            phoneSET(k);
            DATE = new DateTime();
        }
        //деструктор
        ~NOTE()
        {
            Console.WriteLine("Clear!");
        }
        //запись данных1

        public void read()
        {
            Console.WriteLine("Введите ФИО");
            fioSET(Console.ReadLine());
            
            while (phoneGET() == "0")
            {
                Console.WriteLine("Введите телефон ");
                string value = Console.ReadLine();
                phoneSET(value);
            }
            Console.WriteLine("Введите дату рождения в формате дд/мм/гггг");
            dateSET(Console.ReadLine());
        }
        //вывод данных
        public void show()
        {
            Console.WriteLine("Фамилия, имя, отчество  {0}", fioGET());
            Console.WriteLine("Номер телефона {0} ", phoneGET());
            Console.WriteLine("Дата рождения {0}/{1}/{2} ", dateGET().Day, dateGET().Month, dateGET().Year);
        }
        public static void showYear(List<NOTE> lis)
        {
            int n = 0;
            while (n == 0)
                try
                {
                    Console.WriteLine("Введите год поиска");
                    n = Convert.ToInt32(Console.ReadLine());
                }
                catch
                {
                    Console.WriteLine("Input Error");
                }

            foreach (var i in lis)
                if (i.dateGET().Year == n)
                {
                    Console.WriteLine("{0} {1} {2}", i.fioGET(), i.dateGET(), i.phoneGET());
                }
        }
        public static int readnum()
        {
            int n = 0;
            while (n == 0)
            {
                try
                {
                    n = Convert.ToInt32(Console.ReadLine());
                }
                catch (FormatException)
                {
                    Console.Clear();
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Ошибка ввода. Повторите ввод");
                    Console.ForegroundColor = ConsoleColor.White;
                }
                catch (InvalidCastException)
                {
                    Console.Clear();
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Ошибка ввода. Повторите ввод");
                    Console.ForegroundColor = ConsoleColor.White;
                }
            }
            Console.Clear();
            return n;
        }
        public static void enter(ref List<NOTE> lis)
        {
            Console.WriteLine("Введите количество пользователей ");
            int n = readnum();
            for (int i = 0; i < n; i++)
            {
                lis.Add(new NOTE());
                Console.WriteLine("#{0}", i + 1);
                lis[i].read();
                Console.Clear();
            }
        }
        public static void Show(List<NOTE> lis)
        {
            for (int i = 0; i < lis.Count; i++)
            {
                lis[i].show();
                Console.WriteLine();
            }
        }
    }
}
