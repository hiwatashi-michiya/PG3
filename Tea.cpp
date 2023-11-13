#include "Tea.h"
#include <stdio.h>

Tea::~Tea() {
	printf("%sを飲み干した\n", name);
}

void Tea::Order() {

	name = "紅茶";

	printf("%sを注文した。良い香りだ。\n", name);

}
