#include "Enemy.h"
#include <iostream>

void Enemy::Update()
{
	
	int phase;
	scanf_s("%d", &phase);
	index = phase;
	(this->*spFuncTable[index])();
}

void Enemy::Approach()
{
	std::cout << "�G�̐ڋ߁I" << std::endl;
}

void Enemy::Shot()
{
	std::cout << "�G�̍U���I" << std::endl;
}

void Enemy::Back()
{
	std::cout << "�G�̑ދp�I" << std::endl;
}

void (Enemy::* Enemy::spFuncTable[])() = {
	
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Back
};
