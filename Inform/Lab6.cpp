#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

void bubble_sort(int *a, int length) {
	for (int j = 0; j < length - 1; j++) {
		for (int i = 0; i < length - j -1; i++) {
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
	
			}
		}

	}
}		//6.5

//5.1.6

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n],i,sum=0,max;
	srand(time(0));
	max = -1;
	cout << "Исходный массив: " << endl;

	for (i = 0;i < n;i++)
	{
		a[i] =  (rand() % 100)*(rand() % 2 ? -1 : 1);	//6.1
				cout << a[i] << "\t";
		if (a[i] > max)  max = a[i];		//6.2
		sum += a[i];					//6.3
	}

	cout <<endl<< "Элементы не равные 0: " << endl;
	for (i = n - 1;i >= 0;i--)
	{
		if (a[i]) { cout << a[i] << "\t";  }
	}		//6.4
		
	cout << endl<<"Сортированный массив: "<<endl;

	bubble_sort(a, n);

	for (i = 0;i < n;i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl ;
	(max > 0) ? cout << "Максимальное положительное значение= " << max << endl : cout << "Нет положительных чисел" << endl;
	cout << "Сумма элементов=  " << sum << endl;	
	system("pause");
}

//5.2
//void main()
//{
//	const int n = 5, m = 6;
//	bool log = false;
//	int a[n][m] = {}, i, j, k = 0, b[n] = {};

//	srand(time(0));
//	setlocale(LC_ALL, "Russian");

//	cout << "Исходные значения: " << endl;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++)
//		{
//			a[i][j] = (rand() % 100)*(rand() % 2 ? -1 : 1);
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;

//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (a[i][j] < 0)
//			{
//				b[k] = j + 1;
//				break;
//			}
//		}
//		k++;
//	}
//	cout <<endl<< "Массив номеров отрицательных элементов каждой строки " << endl;
//	for (i = 0; i < n; i++)
//	{
//		cout << b[i] << "\t";
//	}
//	cout << endl;
//	system("pause");
//}


//	5.3.6

//void main()
//{
//	const int n = 7;
//	int i, j, a[n][n] = {},sum=0;
//	srand(time(0));
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			a[i][j] = (rand() % 100)*(rand()%2?-1:1);
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i % 2 == j % 2) sum += a[i][j];
//		}
//	}
//	cout << "Summa= "<< sum << endl;
//	system("pause");
//}

//6.1.11
//
//void main()
//{
//	const int n = 10;
//	int i,a[n] = {}, b[n] = {}, c[n] = {};
//	srand(time(0));	
//	for (i = 0;i < n;i++)
//	{
//		a[i]= (rand() % 100)*(rand() % 2 ? -1 : 1);
//		b[i]= (rand() % 100)*(rand() % 2 ? -1 : 1);
//	}
//	for (i = 0;i < n;i++)
//	{
//		a[i] > b[i] ? c[i] = a[i] : c[i] = b[i];
//	}
//	for (i = 0;i < n;i++)
//		cout << a[i] << "\t";
//	cout << endl;
//	for (i = 0;i < n;i++)
//		cout << b[i] << "\t";
//	cout << endl;
//	for (i = 0;i < n;i++)
//		cout << c[i] << "\t";
//	cout << endl;
//	system("pause");
//}

//6.2.21
//
//void main()
//{
//	const int n = 13, m=5;
//	int a[n+2][m] = {},i,j;
//
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				a[i][j] = (rand() % 100)*(rand()%2?-1:1);
//				cout << a[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		cout << endl;	
//
//	for (i = n - 1;i >= 0;i--)
//	{
//		for (j = 0; j < m;j++)
//		{
//			a[i + 2][j] = a[i][j];
//		}
//
//	}
//
//	for (i = 0;i <= 1;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			a[i][j] = a[n + i][j];
//		}
//
//	}
//
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			cout << a[i][j] << "\t";
//
//		}
//		cout << endl;
//	}
//	system("pause");
//}
