// ConsoleApplication5.cpp : main project file.

#include "stdafx.h"
#include <queue>
#include <deque>
#include <list>
#include "math.h"
#include <iostream>


using namespace System;
using namespace System::Collections;

//ref struct TRAIN
//{
//	String^ dest;
//	String^ num;
//	String^ time;
//};
//
//int main(array<System::String ^> ^args)
//{
//	array <TRAIN^> ^ rasp = gcnew array <TRAIN^>(5);
//	
//	for (int i = 0; i < 5; i++)
//	{
//		rasp[i] = gcnew TRAIN;
//		Console::Write("Введите пункт назначения {0}: ", i + 1);
//		rasp[i]->dest = Console::ReadLine();
//		Console::Write("Введите номер поезда: ");
//		rasp[i]->num = Console::ReadLine();
//		Console::Write("Введите время отправления: ");
//		rasp[i]->time = Console::ReadLine();
//		Console::WriteLine();
//	}
//	Console::Write("Введите интересующее время отправления ");
//	String^ str = Console::ReadLine();
//	
//	bool flag=false;
//
//	for (int i = 0; i < 5; i++)
//	{
//		int j= str->Compare(str, rasp[i]->time);
//		if (j < 0)
//		{
//			flag = true;
//			Console::WriteLine("{0} \t {1} \t {2}",rasp[i]->dest, rasp[i]->num, rasp[i]->time);
//		}
//	}
//	!flag ? Console::WriteLine("Поезда не найдены ") : 0;
//	return 0;
//}

// ConsoleApplication5.cpp : main project file.

#include "stdafx.h"
#include "math.h"
#include <iostream>


using namespace System;

struct Time
{
	int hours;
	int min;
	int sec;
};

Time del(Time t1, Time t2)
{
	Time a;		
	int sn,sk,ds;
	sk = t2.hours * 3600 + t2.min * 60 + t2.sec;
	sn = t1.hours * 3600 + t1.min * 60 + t1.sec;
	ds = sk - sn;
	a.hours = ds / 3600;
	ds %= 3600;
	a.min = ds / 60;
	ds %= 60;
	a.sec = ds;
	return(a);
}

Time conv(String ^a)
{
	long long k=0,d=0;
	Time b;

	while (a->IndexOf(':') != -1)
	{
		a = a->Remove(a->IndexOf(':'), 1);	
	}
		k = Convert::ToInt32(a);
		b.hours = k / 10000;
		b.min = a[a->Length-4]*10+a[a->Length-3];
		b.sec = a[a->Length - 2] * 10 + a[a->Length - 1];

	return b;
}


void main()
{
	Time t1, t2;
	Console::WriteLine("Введите начальное время в формате HH:MM:SS");
	String^ str1 = Console::ReadLine();
	t1.sec = 0;

	while (t1.sec == 0) {
		try { t1 = conv(str1); }
		catch (...)
		{
			Console::WriteLine("Неверный формат ввода начального времени ");
			str1 = Console::ReadLine();
		}
	}

	Console::WriteLine("Введите  конечное время в формате HH:MM:SS");
	String^ str2 = Console::ReadLine();
	t2.sec = 0;
	while (t2.sec == 0) {
		try { t2 = conv(str2); }
		catch (...)
		{
			Console::WriteLine("Неверный формат ввода конечного времени ");
			str2 = Console::ReadLine();
		}
	}
	t1 = del(t1, t2);

	Console::WriteLine("Разница в минутах равна {0}м.", t1.hours * 60 + t1.min);
}

