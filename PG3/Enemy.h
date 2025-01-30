#pragma once
class Enemy
{
public:

	void Update();
	void Approach();
	void Shot();
	void Back();
public:
	//メンバ関数のポインタテーブル
	static void (Enemy::* spFuncTable[])();
	int count = 0;
	int index = 0;
};

