#include "Mouse.h"
#include <corecrt_memory.h>

InputDeviceType Mouse::type()
{
	return InputDeviceType::Mouse;
}

char* Mouse::Read()
{
	this->accelX = 4.1234;
	this->accelY = -3.5341;

	int x = (int) (this->accelX * 1000);
	int y = (int) (this->accelY * 1000);

	int sizeOfX = sizeof(x);
	int sizeOfY = sizeof(y);

	char* pos = new char[sizeOfX + sizeOfY + 1];
	
	memcpy(pos, &x, sizeOfX);
	memcpy(pos + sizeOfX, &y, sizeOfY);
	pos[sizeOfX + sizeOfY] = 0;

	return pos;
}
