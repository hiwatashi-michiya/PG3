#pragma once
#include "Drink.h"

class Wine : public Drink 
{
public:

	~Wine() override;

	void Order() override;

};
