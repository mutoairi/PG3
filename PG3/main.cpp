#include<stdio.h>

int Recursive(int a) {
	if (a<= 1) {
		return 100;
	}
	return( Recursive(a-1)*2 )- 50;

}
int main() {
	
	int n = 9;
	int result;
	result = Recursive(n);

	int normal = 1072 * n;
	printf("%d\n", result);
	printf("%d\n", normal);
	return 0;

}
