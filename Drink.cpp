#include "Drink.h"
#include <stdio.h>

Drink::Drink() {

}

Drink::~Drink() {

}

Water::~Water() {
	printf("%s�����݊�����\n", name);
}

void Water::Order() {

	name = "����";

	printf("%s�𒍕�����\n", name);

}

Tea::~Tea() {
	printf("%s�����݊�����\n", name);
}

void Tea::Order() {

	name = "�g��";

	printf("%s�𒍕�����\n", name);

}

OrangeJuice::~OrangeJuice() {
	printf("%s�����݊�����\n", name);
}

void OrangeJuice::Order() {

	name = "�I�����W�W���[�X";

	printf("%s�𒍕�����\n", name);

}

Wine::~Wine() {
	printf("%s�����݊�����\n", name);
}

void Wine::Order() {

	name = "���C��";

	printf("%s�𒍕�����\n", name);

}
