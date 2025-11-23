#include "pch.h"
using namespace System;
int main()
{
	const int SIZE = 10;
	array<int, 2>^ table = gcnew array<int, 2>(SIZE, SIZE);
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			table[i, j] = (i + 1) * (j + 1);
	Console::WriteLine("Таблиця множення 10x10:\n");
	Console::Write("   ");
	for (int i = 1; i <= SIZE; i++)
		Console::Write("{0,4}", i);
	Console::WriteLine();
	for (int i = 0; i < SIZE; i++) {
		Console::Write("{0,4}", i + 1);
		for (int j = 0; j < SIZE; j++)
			Console::Write("{0,4}", table[i, j]);
		Console::WriteLine();
	}
	Console::ReadLine();
	return 0;
}
