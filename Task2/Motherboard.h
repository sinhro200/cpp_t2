#include "Socket.h"
#include "RAMType.h"
#include "RAM.h"
#include "CPU.h"
#pragma once

class Motherboard
{
protected:
	CPU* _cpu;
	Socket _socket;

	int _ramCount;
	RAM ** _rams;
	RAMType _ramType;
public:
	inline Socket getSocket();
	inline RAMType getRAMType();
	inline int getRamCount();
	inline RAM** getRAMs();
	bool setRam(RAM* ram, int position);
	bool setCPU(CPU* cpu);
};

class RamTypeDidNotMatchException {
public:
	RamTypeDidNotMatchException(RAMType requiredType) {
		this->required = requiredType;
	}
	RAMType required;
};

class SocketDidNotMatchException {
public:
	SocketDidNotMatchException(Socket requiredSocket) {
		this->required = requiredSocket;
	}
	Socket required;
};
