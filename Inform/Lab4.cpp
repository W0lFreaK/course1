#include "stdafx.h"
#include <iostream>
using namespace std;


//5.1.7
//
//void main()
//{
//	float  a, c, x;
//	float F;
//	cin >> a;
//	cin >> c;
//	cin >> x;
//		if (c < 0 && a)
//	{
//		F = -a*x*x;
//	}
//		else
//			if ((c > 0) && (! a) )
//			{
//			     if (x) { F = (a - x) / (c*x);
//                   }
//				 else {
//					cout << "Razriv f(x)";
//					return; }
//			}
//			else
//				if (c) 
//				{
//				F = 1 + x / c;
//				}
//				else
//				{
//					cout << "razriv f(x)" << endl;
//					system("pause");
//					return;
//				}
//
//	cout << F << endl ;
//	system("pause");
//}
//
//

// 5.1.17

//
//void main()
//{
//	float F;
//	float a, b, x, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cin >> x;
//	if (x < 0 && b)
//		{
//			F = x*x*(a*x + b);
//		}
//		else
//			if (x > 0 && ! b )
//				{
//				if (x != c)
//			{
//			F = (x - a) / (x - c);
//			}
//				else {
//					cout << "razriv f(x)";
//					return;
//				}
//			}
//			else
//				if (c && x!=10) 
//			{
//				F = (x + 5) / (c*(x - 10));
//			}
//				else
//	{
//		cout << "Razriv f(x)"<<endl;
//		system("pause");
//		return;
//	}
//		cout << F<<endl;
//		system("pause");
//}

//5.2.7


//void main()
//{
//	setlocale(LC_ALL, "Russian");
//	char s;
//	cin >> s;
//	switch (s)
//	{
//	case 'Y': cout << "Zima" << endl; break;
//	case 'D': cout << "Zima" << endl; break;
//	case 'F': cout << "Zima" << endl; break;
//	case 'M': cout << "Vesna" << endl; break;
//	case 'A': cout << "Vesna, Leto" << endl; break;
//	case 'I': cout << "Leto" << endl; break;
//	case 'S': cout << "Osen" << endl; break;
//	case 'O': cout << "Osen" << endl; break;
//	case 'N': cout << "Osen" << endl; break;
//	default: cout << "INPUT ERROR" <<endl;
//	}
//	system("pause");
//}


//5.2.17

//void main()
//{
//	setlocale(LC_ALL, "Russian");
//	short a;
//	cin >> a;
//	switch (a)
//	{
//	case 1: cout<<"Плохо"<<endl; break;
//	case 2: cout<<"Неудовлетворительно"<<endl; break;
//	case 3: cout<<"Удовлетворительно"<<endl; break;
//	case 4: cout<<"Хорошо"<<endl; break;
//	case 5: cout<<"Отлично"<<endl; break;
//	default: cout << "INPUT Error" << endl; 
//	}
//	system("pause");
//}

//5.2.27

//void main()
//{
//	int k;
//	double n;
//	cin >> k;
//	cin >> n;
//	switch (k)
//	{
//	case 1: cout << "b= " << n*sqrt(2) << "; h= " << n*sqrt(2)/2.0 << "; S= " << n*n / 2 << endl; break;					//dana A
//	case 2: cout << "a= " << n/sqrt(2) << "; h= " << n / 2 << "; S= " << n*n / 4 << endl; break;							//dana B
//	case 3: cout << "b= " << n * 2 << "; a= " << n* sqrt(2) << "; S= " << n*n << endl; break;								//dana H
//	case 4: cout << "a= " << sqrt(n * 2) << "; b= " << 2 * sqrt(n) << "; h= " <<  sqrt(n) << endl; break;					//dana S 
//	default: cout << "Input Error" << endl; break; 
//	}
//	system("pause");
//}


//Dop nomera

//6.1.18

//void main()
//{
//	double b = 0, c = 0, a = 0;
//	cin >> a >> b >> c;
//	if (a < 0 && -b / 2 / a <= 0)
//	{
//		cout << "Net reshenii" << endl;
//		return;
//	}
//	else
//		if (a > 0 && -b / 2 / a > 0)
//		{
//			cout << "(-inf;+inf)" << endl;
//		}
//		else
//			if (a > 0 && -b / 2 / a == 0)
//			{
//				cout << "(-inf;" << -b / 2 / a << ") and (" << -b / 2 / a << ";+inf);" << endl;
//			}
//			else
//				if (a > 0)
//				{
//					cout << "(-inf;" << (-1 * b - sqrt(b*b - 4 * a*c)) / 2 / a << ") and (" << (-1 * b + sqrt(b*b - 4 * a*c)) / 2 / a << ";+inf)" << endl;
//				}
//				else
//					cout << "(" << (-1 * b - sqrt(b*b - 4 * a*c)) / 2 / a << ";" << (-1 * b + sqrt(b*b - 4 * a*c)) / 2 / a << ")" << endl;
//
//	system("pause");
//}
//
//
//void main()
//{
//	int a,k=0;
//	cin >> a;
//	while (a > 0)
//	{
//		a = a / 10;
//		k++;
//	}
//
//	switch (k)
//	{
//	case 1: cout << " 1" << endl; break;
//	case 2: cout << " 2" << endl; break;
//	case 3: cout << " 3" << endl; break;
//	case 4: cout << " 4" << endl; break;
//	case 5: cout << " 5" << endl; break;
//	case 6: cout << " 6" << endl; break;
//	case 7: cout << " 7" << endl; break;
//	case 8: cout << " 8" << endl; break;
//	case 9: cout << " 9" << endl; break;
//	default: cout << "Input Error";
//	}
//	system("pause");
//
//}
