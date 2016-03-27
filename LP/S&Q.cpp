// ConsoleApplication14.cpp: главный файл проекта.

#include "stdafx.h"
#include "stdlib.h"

using namespace System;

int ReadNum()
{
	int x;
	bool ex;
	do
	{
		ex = 0;
		try
		{
			x = Convert::ToInt32(Console::ReadLine());
		}
		catch (...)
		{
			ex = true;
			Console::WriteLine("Input Error, please, try again ");
		}
	} while (ex);
	return(x);
}

ref struct MyStruct
{
	String^ str;
	int num;
};

ref struct Stack
{
	MyStruct^ struc= gcnew MyStruct();
	Stack^  next;
};

void pushS(Stack^* top)
{
	Stack ^newS = gcnew Stack;
	Console::Write("Enter string: ");
	newS->struc->str = Console::ReadLine();
	Console::Write("Enter numb: ");
	newS->struc->num = ReadNum();
	newS->next = *top;
	*top = newS;
}

void showS(Stack^ top)
{
	Stack ^newS = top;
	while (newS)
	{
		Console::WriteLine("{0}, {1} \n", newS->struc->num, newS->struc->str);
		newS = newS->next;
	}
}

void popS(Stack^* top)
{
	Stack^ p = gcnew Stack;
	Console::WriteLine("String: {0}, Number {1}", (*top)->struc->str, (*top)->struc->num);
	p = *top;
	*top = p->next;
	delete(p);
}

ref struct Queue
{
	MyStruct^ struc = gcnew MyStruct();
	Queue^ next;
};

void pushQ(Queue^* BQ, Queue ^* EQ)
{
	Queue ^newQ = gcnew Queue;
	Console::Write("Enter String ");
	newQ->struc->str = Console::ReadLine();
	Console::Write("Enter num ");
	newQ->struc->num = ReadNum();
	if (!*BQ)
	{
		*BQ = newQ;
	}
	else
	{
		(*EQ)->next = newQ;
	}
	*EQ = newQ;	
}

void showQ(Queue ^ bq)
{
	Queue ^newQ = bq;
	while (newQ)
	{
		Console::WriteLine("{0}, {1} \n", newQ->struc->num, newQ->struc->str);
		newQ = newQ->next;
	}
}

void popQ(Queue ^* BQ)
{
	Queue ^ qe = gcnew Queue;
	qe = *BQ;
	Console::WriteLine("{0}, {1} \n", qe->struc->str, qe->struc->num);
	*BQ = qe->next;
	delete(qe);
}

int main()
{
	/*Stack ^top;	
	pushS(&top);
	pushS(&top);
	pushS(&top);
	pushS(&top);
	showS(top);
	popS(&top);
	popS(&top);
	showS(top);*/

	Queue^ bq, ^eq ;
	pushQ(&bq, &eq);
	pushQ(&bq, &eq);
	pushQ(&bq, &eq);
	pushQ(&bq, &eq);
	showQ(bq);
	popQ(&bq);
	popQ(&bq);
	showQ(bq);
	return(0);
}
