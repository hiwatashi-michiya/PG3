#pragma once
#include "Drink.h"

class Tea : public Drink 
{
public:

	~Tea() override;

	void Order() override;

};
