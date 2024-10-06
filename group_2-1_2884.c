#include <stdio.h>
int a, b;

int main() {
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
