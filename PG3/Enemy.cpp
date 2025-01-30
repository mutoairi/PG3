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
	std::cout << "“G‚ÌÚ‹ßI" << std::endl;
}

void Enemy::Shot()
{
	std::cout << "“G‚ÌUŒ‚I" << std::endl;
}

void Enemy::Back()
{
	std::cout << "“G‚Ì‘Þ‹pI" << std::endl;
}

void (Enemy::* Enemy::spFuncTable[])() = {
	
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Back
};
