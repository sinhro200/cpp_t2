#include "Socket.h"
#pragma once
class CPU
{
protected:
	int _frequency;
	int _countCores;
	Socket _socket;
public:
	inline int getFrequency();
	inline int getCountCores();
	inline Socket getSocket();
};

