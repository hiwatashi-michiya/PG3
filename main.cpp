#include <stdio.h>
#include "Calc.h"

int main() {

	Calc<int, float> c1(10, 9.3f);
	Calc<int, double> c2(20, 9.9);
	Calc<float, int> c3(28.7f, 13);
	Calc<float, double> c4(12.4f, 11.1);
	Calc<double, int> c5(23.4, 18);
	Calc<double, float> c6(87.6, 76.5f);

	printf("c1の小さい方の値 : %d\n", c1.Min());
	printf("c2の小さい方の値 : %d\n", c2.Min());
	printf("c3の小さい方の値 : %f\n", c3.Min());
	printf("c4の小さい方の値 : %f\n", c4.Min());
	printf("c5の小さい方の値 : %lf\n", c5.Min());
	printf("c6の小さい方の値 : %lf\n", c6.Min());

	return 0;

}