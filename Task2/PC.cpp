#include "PC.h"

bool PC::addInputDevice(InputDevice* id)
{
    this->_inputDevices.push_back(id);
    return true;
}

bool PC::addOutputDevice(OutputDevice* od)
{
    this->_outputDevices.push_back(od);
    return true;
}

bool PC::setChannel(InputDevice* id, OutputDevice* od)
{
    if (std::find(this->_inputDevices.begin(), this->_inputDevices.end(), id) ==
            this->_inputDevices.end() ||
        std::find(this->_outputDevices.begin(), this->_outputDevices.end(), id) ==
            this->_outputDevices.end()  )
        return false;
    _channels.insert({id, od});

    return false;
}
