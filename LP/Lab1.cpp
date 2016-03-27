// ConsoleApplication6.cpp : main project file.

#include "stdafx.h"

#include <iostream>
using namespace std;
using namespace System;

void main()
{
	const int strl = 100;
	char str[strl] = {}, temp[strl] = {}, MaxStr[strl] = {};
	int i, count = 0, MaxCount = 0, k = 0, j;

	cin.getline(str, strl);

	for (i = 0; i < strlen(str);i++)
	{
		if (str[i] == str[i + 1]) { k = 1; }
		else
			if
				(str[i - 1] == str[i + 1])
			{
				k = 0;
			}
			else
				continue;

		while (str[i - count] == str[i + count + k] && (i - count)>=0  && (strlen(str) - i - count >= 0))
		{
			count++;
		}
		if (count > MaxCount)
		{
			for (j = 0; j < count * 2-1+k; j++)
				MaxStr[j] = str[i - count / 2 + j-1];
		}
		count = 0;
	}
	cout << MaxStr << endl;
}

//++ void main()
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

//++ void main()
//{
//	String^ str = Console::ReadLine();
//	Console::WriteLine(str);
//	int count = 0;
//	
//
//	array <Char>^ sep = {' '};
//	array<String^>^ arr = str->Split( sep, StringSplitOptions::RemoveEmptyEntries);
//	
//	Console::WriteLine(arr->Length);
//	for (int i = 0; i < arr->Length; i++)
//	{
//		count+=arr[i]->Length;	
//	}
//	Console::WriteLine(count);
//}

//void main()
//{
//	String^ str = Console::ReadLine();
//	int i = 0;	
//	for (i = 0; i < str->Length; i++)
//	{
//		if (str->IndexOf(str[i], i + 1) != -1)
//		{
//			while (str->IndexOf(str[i], i + 1) != -1)
//				str = str->Remove(str->IndexOf(str[i], i + 1),1);
//			str = str->Remove(i, 1);
//		}
//
//	}
//	Console::WriteLine(str);
//}
