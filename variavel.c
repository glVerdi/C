#include <stdio.h>
#include <stdlib.h>

void main(){

    //Read integer value
    int a = 50;
    printf("O valor de a eh = %d\n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    //Read decimal value
    float b = 5.5;
    printf("O valor de b eh = %f\n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    //Read character
    char c = 't';
    printf("O valor de c eh = %c\n", c);
    fflush(stdin);
    scanf("%c", &c);
    printf("O valor de c mudou para %c", c);
}
