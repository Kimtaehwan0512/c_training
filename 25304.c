#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int total, now, now_n, n;
    int res = 0;
    scanf("%d", &total);
    scanf("%d", &n);

    for (int i = 0;i < n;i++) {
        scanf("%d %d", &now, &now_n);
        res = res + (now * now_n);
    }

    if (res == total) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}
