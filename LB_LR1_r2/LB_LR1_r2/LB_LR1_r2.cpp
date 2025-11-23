#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    Console::Write("Прошу тебе введи цей перший рядочок...:");
    String^ str1 = Console::ReadLine();
    Console::Write("Не лінися, другий теж треба : ");
    String^ str2 = Console::ReadLine();
    int result(String::Compare(str1, str2));
    if (result < 0)
        Console::WriteLine(L"{0} менше нiж {1}.", str1, str2);
    else if (result > 0)
        Console::WriteLine(L"{0} білььше нiж {1}.", str1, str2);
    else
        Console::WriteLine(L"{0} такий же самий по довжині, як {1}.", str1, str2);
    return 0;
}
