#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 10;

    //Conectivo logico E, se uma comparação for falsa, não entra no bloco (Logical connective AND, if one comparision is false, it doesnt enter the block)
    if(a > 5 && a < 15){
        printf("A variavel 'a' esta entre 5 e 15\n");//the variable 'a' is between 5 and 15
    }

    //Conectivo logico OU, se uma comparação for verdadeira, já entra no bloco (Logical connective OR, if one comparision is true, it does enter the block)
    if(a > 5 || a > 15){
        printf("A variavel 'a' eh maior que 5 ou 15\n");//the variable 'a' is bigger than 5 or 15
    }

    //Misturando conectivos (mixing the connectives)
    if(a > 5 && a < 15 || a == 20){
        printf("A variavel 'a' esta entre 5 e 15 ou ela vale 20");//the variable 'a' is between 5 and 15 or is equal to 20
    }
}
