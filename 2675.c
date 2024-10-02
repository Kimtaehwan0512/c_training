#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int a;
    scanf("%d", &a);
    
    int n_num;
    char n_str[20];
    for (int i = 0;i < a;i++) {
        scanf("%d %s", &n_num, n_str);
        for (int j = 0;j < strlen(n_str);j++) {
            for (int k = 0;k < n_num;k++) {
                printf("%c", n_str[j]);
            }
        }
        printf("\n");
    }
}
