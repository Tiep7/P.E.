
#include<stdio.h>
int main(void) {
    int a;
    float b, c;
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Primeiro numero = %d\n", a);
    printf("%.2f eh o segundo numero\n", b);
    printf("Finalmente %.3f eh o terceiro numero\n", c);
    return 0;
}