#include "OrangeJuice.h"
#include <stdio.h>

OrangeJuice::~OrangeJuice() {
	printf("%sを飲み干した\n", name);
}

void OrangeJuice::Order() {

	name = "オレンジジュース";

	printf("%sを注文した。甘い。\n", name);

}
