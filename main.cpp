#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* shapes[2];
	for (size_t i = 0; i < 2; i++) {
		
		if (i == 0) {
			shapes[i] = new Circle(2.0f);
		}
		else {
			shapes[i] = new Rectangle(3.0f, 4.0f);
		}

	}

	for (size_t i = 0; i < 2; i++) {
		shapes[i]->Size();
		shapes[i]->Draw();
	}

	for (size_t i = 0; i < 2; i++) {
		delete shapes[i];
	}

	return 0;
}