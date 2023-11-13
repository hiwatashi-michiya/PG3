#pragma once
#include "Drink.h"

class Water : public Drink 
{
public:

	~Water() override;

	void Order() override;

};
