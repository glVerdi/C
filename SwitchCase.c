#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 2;
    char b = 'y';

    /*Código de exemplo com if (Exemple code with if)
    if(a == 1){
        printf("Opcao escolhida: 1\n");//The chosen option was: 1
    }else if(a == 2){
        printf("Opcao escolhida: 2\n");//The chosen option was: 2
    }else if(a == 3){
        printf("Opcao escolhida: 3\n");//The chosen option was: 3
    }else{
        printf("Opcao invalida\n");//Invalid option
    }*/

    //O mesmo código de cima, adaptado ao switch (The same code from above, adapted to switch)
    switch(a){
        case 1:
            printf("Opcao escolhida: 1\n");//The chosen option was: 1
            break;
        case 2:
            printf("Opcao escolhida: 2\n");//The chosen option was: 2
            break;
        case 3:
            printf("Opcao escolhida: 3\n");//The chosen option was: 3
        default:
            printf("Opcao invalida\n");//Invalid option
            break;
    }

    //Switch com char (Switch with char
    switch(b){
        case 'x':
            printf("A letra eh x\n");//The letter is x
            break;
        default:
            printf("Opcao invalida");//Invalid option
            break;
    }
}
