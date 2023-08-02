#include <stdio.h>
#include <stdlib.h>

void main(){

    //Absolute Value Between Two Notes
    int nota1/*note1*/, nota2/*note2*/, diferenca/*difference*/;
    printf("Digite a primeira nota: ");//Enter the first no
    scanf("%d", &nota1/*note1*/);
    printf("Digite a segunda nota: ");//Enter the second no
    scanf("%d", &nota2/*note2*/);
    diferenca/*difference*/ = nota1/*note1*/ - nota2/*note2*/;
    printf("O valor absoluto da diferenca de %d e %d eh: %d", nota1, nota2, abs(diferenca));//The absolute value of the difference of %d and %d is

}
