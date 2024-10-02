#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b > 44) {
        b = b - 45;
    } else {
        b = b + 60 - 45;
        a = a - 1;
    }
    if (a < 0) {
        a = a + 24;
    }
    printf("%d %d", a, b);
}
