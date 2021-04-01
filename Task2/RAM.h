#include "RAMType.h"
#pragma once
class RAM
{
protected:
	int _frequency;
	RAMType _type;
public:
	inline RAMType getRamType();
	inline int getFrequency();
};

