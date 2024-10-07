#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int A, B, V, res;

int main() {
	scanf("%d %d %d", &A, &B, &V);

	V = V - A;
	if (V % (A - B) == 0) {
		res = (V / (A - B)) + 1;
	}
	else {
		res = (V / (A - B)) + 2;
	}
	
	printf("%d", res);
}