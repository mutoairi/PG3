#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>
#include"Enemy.h"
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int len(int a, int b) { return a / b; }

int main() {
	printf("行動を入力してね！\n0|接近\n1|攻撃\n2|後退\n");
	Enemy* enemy = nullptr;
	enemy = new Enemy();
	enemy->Update();
	delete enemy;
	return 0;
}