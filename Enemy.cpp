#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() {
	phase_ = PhaseStrike;
}

Enemy::~Enemy() {

}

void Enemy::Update() {

	(this->*spFuncTable[static_cast<size_t>(phase_)])();

}

void Enemy::Strike() {

	printf("近接攻撃\n");

	phase_ = PhaseShot;

}

void Enemy::Shot() {

	printf("射撃\n");

	phase_ = PhaseLeave;

}

void Enemy::Leave() {

	printf("離脱\n");

	phase_ = PhaseStrike;

}

void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Strike,
	&Enemy::Shot,
	&Enemy::Leave
};
