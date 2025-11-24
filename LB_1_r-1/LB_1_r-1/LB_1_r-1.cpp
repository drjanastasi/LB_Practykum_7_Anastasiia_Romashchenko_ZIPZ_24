#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    String^ first(L"Ïðèâiò. Öå ìié ïåðøèé ïðîºêò.");
    String^ second(L" ÿ ìàëî ÷îãî ðîçóìiþ....Àëå(!!!) ìåíi äóæå öoêàâî:)");
    String^ third(first + L"I" + second);
    Console::WriteLine(third);
    return 0;
}


