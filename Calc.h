#pragma once

template <typename T1, typename T2>

class Calc
{
public:

	T1 num1_;
	T2 num2_;

	Calc(T1 num1, T2 num2) : num1_(num1),num2_(num2){}

	T1 Min() {

		if (num1_ < num2_) {
			return static_cast<T1>(num1_);
		}

		return static_cast<T1>(num2_);

	}

};

