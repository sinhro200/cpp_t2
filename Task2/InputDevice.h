#include <vector>
#include <functional>
#pragma once
class InputDevice
{
protected:
	std::vector<std::function<void(char* data)>> * listeners;
public:
	InputDevice();
	~InputDevice();
	virtual InputDeviceType type() = 0;
	void addListener(std::function< void(char* data) >);
	void removeListener(std::function< void(char* data) >);

	void transferData();
};

enum class InputDeviceType {
	Audio,
	Keyboard,
	Mouse
};
