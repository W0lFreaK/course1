// ConsoleApplication6.cpp : main project file.

#include "stdafx.h"

#include <iostream>
//using namespace std;
using namespace System;

//void main()
//{
//	const int sl = 20;
//	int i;
//	int count = 0, maxcount = 0;
//	char st[sl] = {}, st2[2 * sl] = {}, temp[sl] = {}, maxs[sl] = {};
//	cin.getline(st, sl);
//
//	for (i = 0; i < sl - 1; i++)
//	{
//		st2[i] = ' ';
//	}
//
//	cout << st2 << endl;
//
//	for (i = 0; i < strlen(st); i++)
//	{
//		st2[i] = st[strlen(st) - i - 1];
//	}
//
//	for (i = 0; i < strlen(st); i++)
//	{
//		swap(st2[i], st2[strlen(st) + i]);
//	}
//
//	st2[strlen(st2) - 1] = '\0';
//
//	while (st2[0] != st[0])
//	{
//		for (i = 0; i < strlen(st2) - 1; i++)
//			st2[i] = st2[i + 1];
//
//		for (i = 0; i < strlen(st); i++)
//		if (st2[i] == st[i])
//		{
//			count++;
//			temp[count] = st[i];
//		}
//		else
//		{
//			if (count > maxcount && st[i - 1] == st[i - count])
//			{
//				maxcount = count;
//				for (int j = 0;j < count; j++)
//				{
//					maxs[j] = temp[j];
//				}
//			}
//		}
//	}
//		cout << st << endl << st2 << "#" << endl;
//		cout << maxs << '\t' << maxcount << endl;
//
//	
//}

//void main()
//{
//	const int sl = 1000;
//	char st[sl] = {};
//	int SpaceNumC = 0, SpaceNumN = 0, count = 0, k = 0, i = 0;
//
//	cin.getline(st, sl);
//
//	st[strlen(st)] = ' ';
//	k = strlen(st);
//
//	while (i<k)
//	{
//		if (isspace(st[i]))
//		{
//			count++;
//			if (count % 2 == 1)
//			{
//				SpaceNumN = i;
//			}
//			else
//			{
//				SpaceNumC = i;
//
//				for (int j = SpaceNumN; j < SpaceNumC; j++)
//				{
//					st[j] = ' ';
//				}
//			}
//		}
//		i++;
//	}
//	count = 0;
//	for (i = 0; i < strlen(st); i++)
//	{
//
//		if (isspace(st[i]))
//			count++;
//		else
//		{
//			if (count != 0) swap(st[i], st[i - count + 1]);
//		}
//	}
//	st[strlen(st) - count+1] = '\0';
//	cout << endl << st << endl;
//}

//void main()
//{
//	String^ str = Console::ReadLine();
//	Console::WriteLine(str);
//	int count = 0, countS = 0;
//	
//	str=str+" ";
//	
//	for (int i = 0; i < str->Length; i++)
//	{
//
//		if (isspace(str[i]))
//		{
//			count++; 
//			cout << countS << '\t';
//			countS = 0;			
//		}
//		else
//		{
//			countS++;
//		}
//	}
//	cout << '\n' << count << endl;
//}

void main()
{
	String^ str = Console::ReadLine();
	int k = 0;

	for (int i = 0; i < str->Length; i++)
	{
		
		for (int j = i+1; j < str->Length; j++)
		{
			k++;
		}

		if (k != 0)
		{
			str->Replace(str[i], '\0');
		}
	}
	Console::WriteLine(str);
}
