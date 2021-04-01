#pragma once
#include "OutputDevice.h"
class Monitor :
    public OutputDevice
{
public:
    virtual OutputDeviceType type() {
        return OutputDeviceType::Video;
    }
protected:
    virtual void Print(char* data);

    virtual void Print(const char* data);
};

