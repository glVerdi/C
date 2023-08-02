#include <stdio.h>
#include <stdlib.h>

void main(){

    //Conditionals
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Simple
    if(a == 5){
        printf("A variavel a eh igual a 5");//The variable a is equal to 5
    }
    if(b == 2.5){
        printf("\nA variavel b eh igual a 2.5");//The variable b is equal to 2.5
    }
    if(c == 'x'){
        printf("\nA variavel c eh igual a letra x");//The variable c is equal to letter x
    }

    //Even or odd
    if(a % 2 == 1){
        printf("\nA variavel a eh impar");//The variable a is odd
    }
    else{
        printf("\nA variavel a eh par");//The variable a is even
    }

    //Compound
    if(opcao == 1){
        printf("\nA opcao eh igual a 1");//The option is equal to 1
    }else if(opcao = 2){
        printf("\nA opcao eh igual a 2");//The option is equal to 2
    }else{
        printf("\nA opcao nao eh igual a 1 e nem 2");//The option is not equal to 1 or 2
    }

}
