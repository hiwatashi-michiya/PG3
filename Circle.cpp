#define _USE_MATH_DEFINES
#include "Circle.h"
#include <stdio.h>
#include <math.h>

Circle::Circle(float radius) {
	radius_ = radius;
}

void Circle::Size() {

	area_ = float(radius_ * radius_ * M_PI);

}

void Circle::Draw() {
	printf("円の面積 : %1.2f\n", area_);
}
