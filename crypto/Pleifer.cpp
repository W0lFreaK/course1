#include "stdafx.h"
#include <iostream>

using namespace std;

struct point
{
	int x;
	int y;
};

point search(char c, char alp[5][5])
{
	int j, k;
	point(d);
	for (j = 0; j < 5; j++)
	{
		for (k = 0; k < 5; k++)
		{
			if (c == alp[j][k])
			{
				d.x = j;
				d.y = k;
			}
		}
	}
	return(d);
}

char* prepareString(char* loz)
{
	int i, j, k=1, length;
	char* loz2 = new char[500];
	bool b;
	length = strlen(loz);
	loz2[0] = loz[0];

	for (i = 0; i < length; i++)
	{
		for (j = 0; j <= strlen(loz2)+1; j++)
		{
				if (loz[i] == loz2[j]) { b = false; }
		}
		if (b == true) { loz2[k] = loz[i]; k++; }
		else b = true;
	}

		return(loz2);
}


void pr(char *loz, char alp[5][5])
{
	int i, j, k;
	k = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			alp[i][j] = loz[k];
			cout << alp[i][j] << "\t";
			k++;
		}
		cout << endl;
	}
}

void zap(char* loz)
{
	int i, length;
	length = strlen(loz);
	for (i = 0; i < 25; i++)
	{
		loz[i + length] = 'a' + i;
		cout << loz[i + length];
	}
	
}

void main()
{
	char alp[5][5] = {}, loz[500] = {}, text[500] = {}, c;
	char* loz1;
	int i, j, k, length;
	point k1, k2;

	k1.x = 0;
	k1.y = 0;
	k2.x = 0;
	k2.y = 0;

	cout << "Vvedite lozung: ";
	cin >> loz;
	cout << "Vvedite text: ";
	cin >> text;
	length = strlen(loz);

	zap(loz);

	length = strlen(loz);
	loz1 = prepareString(loz);

	pr(loz1, alp);
	length = strlen(text);

	if (length % 2 == 1)
	{
		text[length] = 'q';
	}

	for (i = 0; i < length; i += 2)
	{
		if (text[i] == text[i + 1])
		{
			text[i + 1] = 'q';
		}
	}
	//шифрование
	length = strlen(text);

	for (i = 0; i < length; i += 2)
	{
		k1 = search(text[i], alp);
		k2 = search(text[i + 1], alp);

		if (k1.x == k2.x)							//если элементы в 1 строке
		{
			text[i] = alp[k1.x][(k1.y + 1) % 5];			//замена на следующие элементы в строке
			text[i + 1] = alp[k2.x][(k2.y + 1) % 5];
		}
		else
			if (k1.y == k2.y)						//если элементы в одном столбце
			{
				text[i] = alp[(k1.x + 1) % 5][k1.y];		//замена на следующий в столбце элемент
				text[i + 1] = alp[(k2.x + 1) % 5][k2.y];
			}
			else
			{
				text[i] = alp[k1.x][k2.y];			//замена по квадрату
				text[i + 1] = alp[k2.x][k1.y];
			}
	}

	cout << "shifr text: " << text << endl;
	system("pause");
}
