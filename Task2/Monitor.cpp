#include "Monitor.h"
#include <iostream>

void Monitor::Print(char* data)
{
	std::cout << "����� �� ������� :" << data << '\n';
}

void Monitor::Print(const char* data)
{
	std::cout << "����� �� ������� :" << data << '\n';
}