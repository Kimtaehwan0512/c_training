#include <stdio.h>

int a;
int main() {
    scanf("%d", &a);
    for (int i = 1;i < 10;i++) {
        printf("%d * %d = %d\n", a, i, (a * i));
    }
}
