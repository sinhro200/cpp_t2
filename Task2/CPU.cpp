#include "CPU.h"
#include "Socket.h"

inline int CPU::getFrequency()
{
    return this->_frequency;
}

inline int CPU::getCountCores()
{
    return this->_countCores;
}

inline Socket CPU::getSocket()
{
    return this->_socket;
}
