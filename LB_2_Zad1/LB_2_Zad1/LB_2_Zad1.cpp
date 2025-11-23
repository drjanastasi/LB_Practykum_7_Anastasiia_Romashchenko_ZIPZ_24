#include "pch.h"
using namespace System;
int main()
{
    Console::Write("Введіть кількість водіїв M: ");;
    int M = int::Parse(Console::ReadLine());
    array<int>^ numbers = gcnew array<int>(M);
    array<double>^ P = gcnew array<double>(M);
    array<double>^ L = gcnew array<double>(M);
    Console::Write("Введiть цiну C (вартiсть 1 т·км): ");
    double C = double::Parse(Console::ReadLine());
    Console::WriteLine("\nВведiть данi про водiїв:");
    for (int i = 0; i < M; i++) {
        Console::Write("Табельний номер водiя #{0}: ", i + 1);
        numbers[i] = int::Parse(Console::ReadLine());
        Console::Write("  Вага вантажу (тонн): ");
        P[i] = double::Parse(Console::ReadLine());
        Console::Write(" Вiдстань (км): ");
        L[i] = double::Parse(Console::ReadLine());
    }
    Console::WriteLine("\nВiдомiсть виплати зарплати");
    Console::WriteLine("Таб. номер     Зарплата(грн.)");
    for (int i = 0; i < M; i++) {
        double salary = P[i] * L[i] * C;
        Console::WriteLine("{0,10}    {1,12:F2}", numbers[i], salary);
    }
    Console::WriteLine("\nГотово! Натиснiсть Enter...");
    Console::ReadLine();
    return 0;

    return 0;
}
