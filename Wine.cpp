#include "Wine.h"
#include <stdio.h>

Wine::~Wine() {
	printf("%sを飲み干した\n", name);
}

void Wine::Order() {

	name = "ワイン";

	printf("%sを注文した。渋みがある。\n", name);

}
