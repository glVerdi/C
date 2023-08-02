#include <stdio.h>
#include <stdlib.h>

void main(){

    //Absolute Value Between Two Notes
    int nota1, nota2, diferenca;
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    diferenca = nota1 - nota2;
    printf("O valor absoluto da diferenca de %d e %d eh: %d", nota1, nota2, abs(diferenca));

}
