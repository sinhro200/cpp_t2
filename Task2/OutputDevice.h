#pragma once
class OutputDevice
{
protected:
	virtual void Print(char* data) = 0;
	virtual void Print(const char* data) = 0;
public:
	virtual OutputDeviceType type() = 0;
	void Out(char* data);
	void Out(const char* data);
};

enum OutputDeviceType{
	Audio,
	Video,
	Text
};