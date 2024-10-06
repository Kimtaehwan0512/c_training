#include <stdio.h>
#include <string.h>
char arr[8][5] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
char now[16] = "";
int res = 0;

int main() {
    scanf("%s", now);

    for (int i = 0;i < strlen(now);i++) {
        for (int j = 0;j < 8;j++) {
            if (strchr(arr[j], now[i])) {
                res = res + j + 3;
            }
        }
    }
    printf("%d", res);
}
