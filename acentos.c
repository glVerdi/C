#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Allows to use accents
    setlocale(LC_ALL,"");

    //Prints "Olá"(Hello)
    printf("Olá");
}
