#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

//5.1.6
//void main ()
//{
//	int i;
//	bool b=false;
//	for (i = 100; i < 1000; i++)
//	{
//	if (i*i % 10 + i*i / 10 % 10 + i*i / 100 % 10 == i)
//	{
//	cout << i << endl;
//	b = true;
//	}
//	}
//	(!b) ? cout << "net chisel"<<endl : cout<<endl;
//	system("pause");
//}

//5.1.16
//
//void main()
//{
//	int n,a,sum,p;
//	cout << "Vvedite a: ";
//	cin >> a;
//	cout << endl << "Vvedite n: ";
//	cin >> n;
//	cout << endl;
//	sum = a;
//	p = a;
//	a *= a;
//	for (int i = 3; i <= n; i+=2)
//	{
//	p = p*a;
//	sum += p;
//	cout << sum <<"\t"<<i<< endl;
//	
//	}
//	cout << sum<<endl;
//	system("pause");
//}

//5.1.26

//void main()
//{
//	int a, b, i, sum = 0;
//	cin >> a >> b;
//
//	if (a > b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	for (i = a;i <= b;i++)
//	{
//		sum += i*(i > 0 && !(i % 3));
//	}
//	sum > 0 ? cout << sum << endl : cout << "net chisel" << endl;
//	system("pause");
//}



//5.2.6.1
//void main()
//{
//	double fac = 1, fac2 = 1, eps, sum = 0;
//	int i,  n=1;
//	cin >> eps;
//		while (fac / fac2 > eps)
//	{
//		n++;
//		fac *= n;
//		fac2 = fac;
//
//		for (i = n+1;i <= 2 * n;i++)
//		{
//			fac2 *= i;
//		}
//		sum += fac / fac2;
//	}
//	cout << sum << endl;
//	system("pause");
//}

//5.2.6.2

//void main()
//{
//	double fac = 1, fac2 = 1, eps, sum = 0;
//	int i, n = 1;
//	cin >> eps;
//	if (eps >= 1) 
//	{
//		cout << 1;
//		system("pause");
//		return; }
//	
//	do 
//	{
//		n++;
//		fac *= n;
//		fac2 = fac;
//		for (i = n + 1;i <= 2 * n;i++)
//		{
//			fac2 *= i;
//		}
//		sum += fac / fac2;
//	} 
//	while (fac / fac2 > eps);
//	cout << sum << endl;
//	system("pause");
//}

//6.1.9

//void main() 
//{
//	int i, sum = 0,x,p;
//	cin >> x;
//	p = x;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += p;
//		p *= x;
//	}
//	cout << sum<<endl;
//	system("pause");
//
//}


//6.2.4. While
//void main()
//{
//	int score = 1, x, n, npo = 0, npr = 0;
//	srand(time(0));
//	while (score > 0)
//	{
//		cout << "You score = " << score << endl << "Head Or Tails? " << endl << "Head: 1" << endl << "Tails: 0" <<endl<<"Else -> exit "<< endl;
//		cin >> x;
//		
//		if (x != 0 && x != 1)
//		{
//			system("cls");
//			break;
//		}
//		system("cls");
//		n = rand() % 2;
//		if (n == x)
//		{
//			score++;
//			npo++;
//			cout << "Perfect! You win! You score= " << score << endl;
//		}
//		else
//		{
//			score--;
//			npr++;
//			cout << "No! You Lose." << endl;
//		}
//
//		n == 1 ? cout << "Pred - head" << endl : cout << "Pred - tails" << endl;
//	} 
//	cout << "You finish!" << endl << "Win: " << npo << endl << "Defeat: " << npr << endl << "Final score " << score << endl;
//	system("pause");
//}


//

//6.2.4 Do

//void main()
//{
//	int score = 1, x, n, npo = 0, npr = 0;
//	srand(time(0));
//
//	do
//	{
//		cout << "You score = " << score << endl << "Head Or Tails? " << endl << "Head: 1" << endl << "Tails: 0" <<endl<<"Else -> exit " << endl;
//		cin >> x;
//		if (x != 0 && x != 1)
//		{
//			system("cls");
//			break;
//		}
//		system("cls");
//		n = rand() % 2;
//		if (n == x)
//		{
//			score++;
//			npo++;
//			cout << "Perfect! You win! You score= " << score << endl;
//		}
//		else
//		{
//			score--;
//			npr++;
//			cout << "No! You Lose." << endl;
//		}
//		
//		n == 1 ? cout << "Pred - head"<<endl : cout << "Pred - tails"<<endl;
//
//	} while (score > 0);
//
//	cout << "You finish!" << endl << "Win: " << npo << endl << "Defeat: " << npr << endl<<"Final score "<< score<<endl;
//
//	system("pause");
//}
//
//
