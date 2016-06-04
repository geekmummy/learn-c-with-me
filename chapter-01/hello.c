#include<stdio.h>

int sum(int x, int y) {
	int t = x + y;
	return t;
}

int main(void) {

	int a = 1;
	int b = 2;
	int t = sum(a, b);

	printf("t=%d", t);

	return (0);
}

