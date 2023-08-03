#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior (Bigger)
    if(a > 2){
        printf("%d eh maior que 2\n", a);//is bigger than 2
    }

    //Maior ou igual (Bigger or equal)
    if(c >= b){
        printf("%d eh maior ou igual a %d\n", c, b);//is bigger or equal than
    }

    //Menor (Smaller)
    if(a < 10){
        printf("%d eh menor que 10\n", a);//is smaller than 10
    }

    //Menor ou iguak (Smaller or equal)
    if(a <= 10){
        printf("%d eh menor ou igual a 10\n", a);//is smaller or equal than 10
    }

    //Diferente (Differing)
    if(c != 10){
        printf("%d nao eh 10\n", c);//isnt 10
    }
    if (d != 'a'){
        printf("%c nao eh a", d);//isnt a
    }
}
