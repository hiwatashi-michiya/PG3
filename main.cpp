#include <stdio.h>
#include "Water.h"
#include "Tea.h"
#include "OrangeJuice.h"
#include "Wine.h"

int main() {

	//飲み物のインスタンス
	Drink* drinks[4];

	for (size_t i = 0; i < 4; i++) {

		if (i == 0) {
			drinks[i] = new Water();
		}
		else if (i == 1) {
			drinks[i] = new Tea();
		}
		else if (i == 2) {
			drinks[i] = new OrangeJuice();
		}
		else {
			drinks[i] = new Wine();
		}

	}
	
	//飲み物を注文
	for (size_t i = 0; i < 4; i++) {
		drinks[i]->Order();
	}

	//インスタンス破棄
	for (size_t i = 0; i < 4; i++)
	{
		delete drinks[i];
	}

	return 0;
}