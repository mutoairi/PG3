#pragma once
class Enemy
{
public:

	void Update();
	void Approach();
	void Shot();
	void Back();
public:
	//�����o�֐��̃|�C���^�e�[�u��
	static void (Enemy::* spFuncTable[])();
	int count = 0;
	int index = 0;
};

