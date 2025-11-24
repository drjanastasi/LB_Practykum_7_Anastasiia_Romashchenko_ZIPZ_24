#include "pch.h"
using namespace System;
int main()
{
    Console::Write("Ââåä³òü ê³ëüê³ñòü âîä³¿â M: ");;
    int M = int::Parse(Console::ReadLine());
    array<int>^ numbers = gcnew array<int>(M);
    array<double>^ P = gcnew array<double>(M);
    array<double>^ L = gcnew array<double>(M);
    Console::Write("Ââåäiòü öiíó C (âàðòiñòü 1 ò·êì): ");
    double C = double::Parse(Console::ReadLine());
    Console::WriteLine("\nÂâåäiòü äàíi ïðî âîäi¿â:");
    for (int i = 0; i < M; i++) {
        Console::Write("Òàáåëüíèé íîìåð âîäiÿ #{0}: ", i + 1);
        numbers[i] = int::Parse(Console::ReadLine());
        Console::Write("  Âàãà âàíòàæó (òîíí): ");
        P[i] = double::Parse(Console::ReadLine());
        Console::Write(" Âiäñòàíü (êì): ");
        L[i] = double::Parse(Console::ReadLine());
    }
    Console::WriteLine("\nÂiäîìiñòü âèïëàòè çàðïëàòè");
    Console::WriteLine("Òàá. íîìåð     Çàðïëàòà(ãðí.)");
    for (int i = 0; i < M; i++) {
        double salary = P[i] * L[i] * C;
        Console::WriteLine("{0,10}    {1,12:F2}", numbers[i], salary);
    }
    Console::WriteLine("\nÃîòîâî! Íàòèñíiñòü Enter...");
    Console::ReadLine();
    return 0;

    return 0;
}
