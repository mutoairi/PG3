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
	printf("�s������͂��ĂˁI\n0|�ڋ�\n1|�U��\n2|���\n");
	Enemy* enemy = nullptr;
	enemy = new Enemy();
	enemy->Update();
	delete enemy;
	return 0;
}