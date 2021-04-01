#pragma once
#include "InputDevice.h"
class Mouse :
    public InputDevice
{
private:
    float accelX,accelY;
public:
    virtual InputDeviceType type();
    virtual char* Read();
};

