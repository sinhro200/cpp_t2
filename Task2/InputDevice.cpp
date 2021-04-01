#include "InputDevice.h"

void InputDevice::addListener(std::function<void(char* data)> callback)
{
	this->listeners->push_back(callback);
}

void InputDevice::removeListener(std::function<void(char* data)> callback)
{
	std::remove(this->listeners->begin(), this->listeners->end(),callback);
}

InputDevice::~InputDevice()
{
	this->listeners->clear();
	delete this->listeners;
}

InputDevice::InputDevice() {
	this->listeners = new std::vector< std::function< void(char* data) > >();
}