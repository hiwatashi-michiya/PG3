#include <stdio.h>
#include "Enemy.h"

int main() {

	Enemy enemy;

	//�t�F�[�Y��
	const size_t kMaxPhase = 3;

	for (size_t i = 0; i < kMaxPhase; i++) {
		enemy.Update();
	}

	return 0;

}