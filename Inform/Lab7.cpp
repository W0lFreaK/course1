// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;
double f1(double v, double u, double t)		//передача по значению
{
	double x;
	return (u > 1) ? x = v*u*t : (u >= 0) ? x = u + v + t : x = v - t - u;
}
double f2(double &v, double &u, double &t)	//передача по ссылке
{
	double x;
	return (u > 1) ? x = v*u*t : (u >= 0) ? x = u + v + t : x = v - t - u;
}
double f3(double *v, double *u, double *t)	//передача по адресу
{
	double x;
	return (*u > 1) ? x = (*v)*(*u)*(*t) : (*u >= 0) ? x = (*u) + (*v) + (*t) : x = (*v) - (*t) - (*u);
}
void lab71()
{
	double x, y, a, b, c, sum = 0;
	cin >> x >> y;
	a = sin(x);
	b = cos(y);
	c = x*y;
	sum += f1(sin(x) + cos(y), x + y, 2) + f2(c, a, b);			//по значению + по ссылке
	b = x - y*y;
	c = y - x*x;
	a = a*a;
	sum += f3(&a, &b, &c);										//+по адресу
	cout << sum << endl;
	system("pause");
}
void rm(int array[], int n, int *max, int *sum)
{
	int i;
	for (i = 0; i < n; i++)
	{
		array[i] > *max ? *max = array[i] : 1;
		!(i % 2) ? *sum += array[i] : 1;
	}
}
void lab72()
{
	const int n = 10;
	int a[n] = {}, max, sum;
	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = (rand() % 100) * (rand() % 2 ? 1 : -1);
		cout << a[i] << "\t";
	}
	max = a[0];
	sum = 0;
	cout << endl;
	rm(a, n, &max, &sum);
	cout << max << "\t" << sum << endl;
	system("pause");
}
double max(int *x, int n, int k)
{
	int i, j, max = *x;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			*(x + j + i * 2) > max ? max = *(x + j + i * 2) : 1;
		}

	}
	return max;
}
double min(int *x, int n, int k)
{
	int i, j, min = *x;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			*(x + j + i * 2) < min ? min = *(x + j + i * 2) : 1;
		}
	}
	return min;
}
double sum(int *x, int n, int k)
{
	int i, j, sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			!(*(x + j + i * 2) / 2) ? sum += *(x + j + i * 2) : 1;
		}
	}
	return sum;
}
void InArr(int *x, int n, int k)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			*(x + j + i * 2) = (rand() % 100)*(rand() % 100 ? 1 : -1);
		}
	}
}
void OutArr(int *x, int n, int k)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			cout << *(x + j + i * 2) << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void lab73()
{
	const int n = 5;
	const int m = 2;
	const int n1 = 3;
	const int m1 = 4;

	int  x[n][m] = {}, y[n1][m1] = {}, i, j;

	InArr(*x, n, m);
	InArr(*y, n1, m1);
	OutArr(*x, n, m);
	OutArr(*y, n1, m1);
	cout << (max(*x, n, m) - min(*y, n1, m1)) / (min(*x, n, m) - max(*y, n1, m1)) << endl;
}

double sum(double e, int n, double x)
{
	return x >= e ? (x + sum(e, n + 1, x * (double(n) / 5))) : 0;
}


double sum2(double eps, int n, double a)
{
	return a >= eps ? (a + sum2(eps, n + 1, a / n )) : 0;
}

void lab74()
{
	int n = 1;
	double eps, a = 2, sum = 0;
	cin >> eps;
	sum = sum2(eps, n, a);
	cout << endl << sum << endl;
}


void main()
{
	srand(time(0));
	//lab71();
	//lab72();
	//lab73();
	lab74();

}

