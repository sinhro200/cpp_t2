#include "Keyboard.h"

InputDeviceType Keyboard::type()
{
    return InputDeviceType::Keyboard;
}

char* Keyboard::Read() 
{
    char* s = new char[10];
    for (int i = 0; i < 10; i++)
    {
        s[i] = 'a' + i;
    }
    return s;
}
