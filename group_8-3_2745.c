#include <stdio.h>
#include <string.h>
#include <math.h>

char now_num[24];
int number, res, now_pow;
char search[37] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int main() {
	scanf("%s %d", &now_num, &number);

	for (int i = 0;i < strlen(now_num);i++) {
		for (int j = 0;j < 36;j++) {
			if (now_num[i] == search[j]) {
				now_pow = 1;
				for (int k = 0; k < strlen(now_num) - i - 1;k++) {
					now_pow *= number;
				}
				res += j * now_pow;
				break;
			}
		}
	}
	printf("%d", res);
}