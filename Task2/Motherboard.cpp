#include "Motherboard.h"
#include "Socket.h"

inline Socket Motherboard::getSocket()
{
    return this->_socket;
}

inline RAMType Motherboard::getRAMType()
{
    return this->_ramType;
}

inline int Motherboard::getRamCount()
{
    return this->_ramCount;
}

inline RAM** Motherboard::getRAMs()
{
    return this->_rams;
}

bool Motherboard::setRam(RAM* ram, int position)
{
    if (this->_ramType != ram->getRamType())
        throw new RamTypeDidNotMatchException(this->_ramType);
    if (position < 0 || position >= this->_ramCount)
        return false;
    this->_rams[position] = ram;
    return true;
}

bool Motherboard::setCPU(CPU* cpu)
{
    if (this->_socket != cpu->getSocket())
        throw new SocketDidNotMatchException(this->_socket);
    this->_cpu = cpu;
    return true;
}

