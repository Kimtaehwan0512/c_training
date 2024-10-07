#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int a, b, c;

int main() {
	while (1) {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		
		if (a >= b + c || b >= c + a || c >= a + b) {
			printf("Invalid\n");
		}
		else if (a == b || b == c || a == c) {
			if (a == b && b == c && c == a) {
				printf("Equilateral\n");
			}
			else {
				printf("Isosceles\n");
			}
		}
		else {
			printf("Scalene\n");
		}
	}
}