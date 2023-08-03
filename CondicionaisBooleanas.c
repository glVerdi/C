#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    bool a = true, b = false;

    //Se a for verdadeiro (If a is true)
    if(a){
        printf("A eh verdadeiro\n");//A is true
    }

    //Comparando b (Comparing b)
    if(b){
        printf("B eh verdadeiro\n");//B is true
    }else{
        printf("B eh falso\n");//B is false
    }

    //Comparando uma falsidade (Comparing a falsehood
    if(!b){
        printf("B eh falso");//B is false
    }
}
