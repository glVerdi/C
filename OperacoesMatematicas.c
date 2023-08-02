#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 6, b = 3;

    //Add
    printf("A soma de %d e %d eh: %d", a, b, a + b);

    //Sub
    printf("\nA subtracao de %d e %d eh: %d", a, b, a - b);

    //Division
    printf("\nA divisao de %d e %d eh: %d", a, b, a / b);

    //Multiply
    printf("\nA multiplicacao de %d e %d eh: %d", a, b, a * b);

    //Rest of Division
    printf("\nO resto da divisao entre %d e %d eh: %d", a, b, a % b);

    //Absolute value
    printf("\nO valor absoluto de -3 eh: %d", abs(-3));

}
