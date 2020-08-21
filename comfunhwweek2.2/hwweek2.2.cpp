#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	if (a == 0 || b == 0) {
		printf("Greatest common divisor = 1");
	}
	while (b % a != 0) {
		c = b % a;
		b = a;
		a = c;
	}
	printf("Greatest common divisor = %d", a);
}
