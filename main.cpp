#include <stdio.h>
#include "Drink.h"

int main() {

	//���ݕ��̃C���X�^���X
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
	
	//���ݕ��𒍕�
	for (size_t i = 0; i < 4; i++) {
		drinks[i]->Order();
	}

	//�C���X�^���X�j��
	for (size_t i = 0; i < 4; i++)
	{
		delete drinks[i];
	}

	return 0;
}