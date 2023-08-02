#include <stdio.h>
#include <stdlib.h>

void main(){

    //Read integer value
    int a = 50;
    printf("O valor de a eh = %d\n", a);//The value of a is
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);//The value of a change to

    //Read decimal value
    float b = 5.5;
    printf("O valor de b eh = %f\n", b);//The value of b is
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);//The value of b change to

    //Read character
    char c = 't';
    printf("O valor de c eh = %c\n", c);//The value of c is
    fflush(stdin);
    scanf("%c", &c);
    printf("O valor de c mudou para %c", c);//The value of c change to

}
