#include "Water.h"
#include <stdio.h>

Water::~Water() {
	printf("%sを飲み干した\n", name);
}

void Water::Order() {

	name = "お水";

	printf("%sを注文した。のどが潤った。\n", name);

}
