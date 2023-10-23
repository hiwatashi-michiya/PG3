#pragma once

class Drink
{
public:

	Drink();
	virtual ~Drink();

	//ˆù‚İ•¨‚Ì’•¶
	virtual void Order() = 0;

protected:

	const char* name;

};

class Water : public Drink 
{
public:

	~Water() override;

	void Order() override;

};

class Tea : public Drink 
{
public:

	~Tea() override;

	void Order() override;

};

class OrangeJuice : public Drink 
{
public:

	~OrangeJuice() override;

	void Order() override;

};

class Wine : public Drink 
{
public:

	~Wine() override;

	void Order() override;

};
