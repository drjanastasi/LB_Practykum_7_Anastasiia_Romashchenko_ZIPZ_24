#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::Write("Ïðîøó òåáå ââåäè öåé ïåðøèé ðÿäî÷îê...:");
    String^ str1 = Console::ReadLine();
    Console::Write("Íå ë³íèñÿ, äðóãèé òåæ òðåáà : ");
    String^ str2 = Console::ReadLine();
    int result(String::Compare(str1, str2));
    if (result < 0)
        Console::WriteLine(L"{0} ìåíøå íiæ {1}.", str1, str2);
    else if (result > 0)
        Console::WriteLine(L"{0} á³ëüüøå íiæ {1}.", str1, str2);
    else
        Console::WriteLine(L"{0} òàêèé æå ñàìèé ïî äîâæèí³, ÿê {1}.", str1, str2);
    return 0;
}


