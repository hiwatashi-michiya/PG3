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

	printf("%sを注文した。のどが潤った。\n", name);

}

Tea::~Tea() {
	printf("%sを飲み干した\n", name);
}

void Tea::Order() {

	name = "紅茶";

	printf("%sを注文した。良い香りだ。\n", name);

}

OrangeJuice::~OrangeJuice() {
	printf("%sを飲み干した\n", name);
}

void OrangeJuice::Order() {

	name = "オレンジジュース";

	printf("%sを注文した。甘い。\n", name);

}

Wine::~Wine() {
	printf("%sを飲み干した\n", name);
}

void Wine::Order() {

	name = "ワイン";

	printf("%sを注文した。渋みがある。\n", name);

}
