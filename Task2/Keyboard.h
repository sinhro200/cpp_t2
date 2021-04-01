#pragma once
#include "InputDevice.h"
class Keyboard :
    public InputDevice
{
public :
    virtual InputDeviceType type();
    virtual char* Read();
};

