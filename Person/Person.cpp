#include "pch.h"

using namespace System;

value struct Date
{
    int dd, mm, yyyy;
};

value struct Person
{
    String^ name;
    Date DOB;
};

int main(array<System::String ^> ^args)
{
    // Create a Person
    Person p1 = { "Fred", {10, 3, 1960} };
   

    return 0;
}
