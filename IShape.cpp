#define _USE_MATH_DEFINES
#include "IShape.h"
#include <math.h>
#include <stdio.h>

Circle::Circle(float radius) {
	radius_ = radius;
}

void Circle::Size() {

	area_ = float(radius_ * radius_ * M_PI);

}

void Circle::Draw() {
	printf("â~ÇÃñ êœ : %1.2f\n", area_);
}

Rectangle::Rectangle(float width, float height) {
	width_ = width;
	height_ = height;
}

void Rectangle::Size() {

	area_ = float(width_ * height_);

}

void Rectangle::Draw() {
	printf("ãÈå`ÇÃñ êœ : %1.2f\n", area_);
}

