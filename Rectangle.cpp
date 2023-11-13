#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(float width, float height) {
	width_ = width;
	height_ = height;
}

void Rectangle::Size() {

	area_ = float(width_ * height_);

}

void Rectangle::Draw() {
	printf("矩形の面積 : %1.2f\n", area_);
}

