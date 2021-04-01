#include "CPU.h"
#include "RAM.h"
#include "Motherboard.h"
#include "InputDevice.h"
#include "OutputDevice.h"
#include <vector>
#include <map>
#pragma once
class PC
{
protected:
	Motherboard _motherboard;
	std::vector<InputDevice*> _inputDevices;
	std::vector<OutputDevice*> _outputDevices;
	std::map<InputDevice*,OutputDevice*> _channels;
public:
	bool addInputDevice(InputDevice* id);
	bool addOutputDevice(OutputDevice* od);
	bool setChannel(InputDevice* id, OutputDevice* od);
};

