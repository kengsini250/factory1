#pragma once

#include "Food.hpp"

class _Factory
{
public:
	virtual Food* select(int i) = 0;
	virtual ~_Factory() {}
};

class Factory : public _Factory
{
public :
	Food* select(int i)
	{
		switch (i)
		{
		case 1:
			return new Apple();
		case 2:
			return new Banana();
		case 3:
			return new Cherry();
		default:
			return nullptr;
		}
	}
	~Factory(){}
};
