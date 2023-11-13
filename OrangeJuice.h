#pragma once
#include "Drink.h"

class OrangeJuice : public Drink 
{
public:

	~OrangeJuice() override;

	void Order() override;

};