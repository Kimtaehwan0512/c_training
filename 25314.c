#include <stdio.h>

int a ;

int main() {
    scanf("%d", &a);
    a = a / 4;
    
    for (int i = 0;i < a;i++) {
        printf("long ");
    }
    printf("int");
}
