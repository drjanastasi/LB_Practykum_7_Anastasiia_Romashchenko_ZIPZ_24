#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    String^ first(L"Привiт. Це мiй перший проєкт.");
    String^ second(L" я мало чого розумiю....Але(!!!) менi дуже цoкаво:)");
    String^ third(first + L"I" + second);
    Console::WriteLine(third);
    return 0;
}
