#include <stdio.h>
#include <string.h>

int a, n_num;
char n_str[21];

int main() {    
    scanf("%d", &a);
    
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
