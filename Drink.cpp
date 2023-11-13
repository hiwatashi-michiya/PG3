#include "Drink.h"
#include <stdio.h>

Drink::Drink() {

}

Drink::~Drink() {

}

Water::~Water() {
	printf("%sを飲み干した\n", name);
}

void Water::Order() {

	name = "お水";

	printf("%sを注文した\n", name);

}

Tea::~Tea() {
	printf("%sを飲み干した\n", name);
}

void Tea::Order() {

	name = "紅茶";

	printf("%sを注文した\n", name);

}

OrangeJuice::~OrangeJuice() {
	printf("%sを飲み干した\n", name);
}

void OrangeJuice::Order() {

	name = "オレンジジュース";

	printf("%sを注文した\n", name);

}

Wine::~Wine() {
	printf("%sを飲み干した\n", name);
}

void Wine::Order() {

	name = "ワイン";

	printf("%sを注文した\n", name);

}
