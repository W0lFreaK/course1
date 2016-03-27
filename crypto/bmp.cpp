// bmp.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>
#pragma warning(disable:4996) /*disable deprecation*/
using namespace std;

string TextToBin(char text)
{
	string rezult = "";
	for (int i = 1; i <= 8; i++)
	{
		rezult += -(text << 23 + i >> 31);
	}
	return rezult;
}

void EncryptNumb(long long &numb, char text)
{
	string bin = TextToBin(text);
	for (int i = 0; i < 8; i++)
	{
		if (bin[i] == 1)
		{
			numb |= (long long(1) << ((7 - i) * 8));
		}
		else
		{
			numb &= -(long long(1) << (7 - i) * 8 + 1) + ((long long(1) << (7 - i) * 8) - 1);
		}
	}
}

void EncryptFile(FILE *f, string text)
{
	long long buf;
	int i = 0;
	while (i < (int)text.size())
	{
		fseek(f, 54 + i * 8, SEEK_SET);
		fread(&buf, 8, 1, f);

		EncryptNumb(buf, text[i++]);

		fseek(f, 54 + (i - 1) * 8, SEEK_SET);
		fwrite(&buf, 8, 1, f);
	}

	fseek(f, 54 + i * 8, SEEK_SET);
	fread(&buf, 8, 1, f);

	EncryptNumb(buf, 255);

	fseek(f, 54 + i * 8, SEEK_SET);
	fwrite(&buf, 8, 1, f);
}

string DecriptNumb(long long numb)
{
	string rez;
	for (int i = 1; i <= 8; i++)
	{
		rez += -(numb << i * 8 - 1 >> 63);
	}
	return rez;
}

char BinToText(long long numb)
{
	string bin = DecriptNumb(numb);
	char rez = 0;
	for (int i = 7; i >= 0; i--)
	{
		rez |= int(bin[7 - i]) << i;
	}
	return rez;
}

string DecriptFile(FILE *f)
{
	long long buf;
	char letter = 0;
	string text = "";
	int i = 0;
	while (letter != -1)
	{
		fseek(f, 54 + i * 8, SEEK_SET);
		fread(&buf, 8, 1, f);
		letter = BinToText(buf);
		text += letter;
		i++;
	}
	text[i - 1] = ' ';
	return text;
}

int size(FILE *f)
{
	unsigned short int w = 0, h = 0;
	fseek(f, 18, SEEK_SET);
	fread(&w, 1, 1, f);
	fseek(f, 22, SEEK_SET);
	fread(&h, 1, 1, f);
	w = w*h * 3 / 8;
	return (w);
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string text;
	char path[1000] = {};
	int a;
	FILE * fp;
	setlocale(LC_ALL, "Russian");
	cout << "Что вы хотите сделать?" << endl << "1) Зашифровать" << endl << "2) Расшифровать" << endl;
	cin >> a;
	system("cls");
	cout << "Введите путь к изображению" << endl;
	cin >> path;
	fp = fopen(path, "rb+");

	if (a == 1)
	{
		cout << "Внимание! Максимальное количество символов= " << size(fp) << endl << "Введите исходный текст" << endl;
		cin.ignore();
		getline(cin, text);
		fp = fopen(path, "rb+");
		EncryptFile(fp, text);
		cout << "Complete!" << endl;
		fclose(fp);
	}
	else
	{
		text = DecriptFile(fp);
		cout << text << endl;
		fclose(fp);
	}
	system("pause");
}

