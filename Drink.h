#pragma once

class Drink
{
public:

	Drink();
	virtual ~Drink();

	//飲み物の注文
	virtual void Order() = 0;

protected:

	const char* name;

};

