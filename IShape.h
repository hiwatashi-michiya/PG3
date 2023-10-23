#pragma once
class IShape
{
public:

	IShape() = default;
	~IShape() = default;

	virtual void Size() = 0;

	virtual void Draw() = 0;

protected:

	//�ʐ�
	float area_;

};

class Circle : public IShape 
{
public:

	Circle(float radius);

	void Size() override;

	void Draw() override;

private:

	float radius_;

};

class Rectangle : public IShape 
{
public:

	Rectangle(float width, float height);

	void Size() override;

	void Draw() override;

private:

	float width_;
	float height_;

};
