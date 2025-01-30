#include <stdio.h>
#include <windows.h>
#include<time.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int len(int a, int b) { return a / b; }


typedef void (*PFunc)(char);
void setTimeout(PFunc p, int second, char answer) {
	Sleep(second * 1000);
	p(answer);
}

void Random(char answer) {
	int currentTime;
	int Dice=rand() % 6 + 1;
	currentTime =int( time(nullptr));
	srand(currentTime);
	char result{};
	printf("Œ‹‰Ê%d\n", Dice);
	if (Dice == 2 || Dice == 4 || Dice == 6) {
		result=*"‹ô”";
	}
	if (Dice == 1 || Dice == 3 || Dice == 5) {
		result=*"Šï”";
	}
	//³Œë”»’è
	if (answer == result) {
		printf("³‰ğ\n");
	}
	else {
		printf("•s³‰ğ\n");
	}


}
int main(void) {
	char answer;
	printf("Šï”‚©‹ô”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	answer = getchar();
	scanf_s("%c\n", &answer);

	PFunc p;
	p = Random;
	setTimeout(p, 3, answer);
	return 0;
}