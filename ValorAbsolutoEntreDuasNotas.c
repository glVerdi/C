#include <stdio.h>
#include <stdlib.h>

void main(){

    //Absolute Value Between Two Grades
    int nota1/*grade1*/, nota2/*grade2*/, diferenca/*difference*/;
    printf("Digite a primeira nota: ");//Enter the first grade
    scanf("%d", &nota1/*grade1*/);
    printf("Digite a segunda nota: ");//Enter the second grade
    scanf("%d", &nota2/*grade2*/);
    diferenca/*difference*/ = nota1/*grade1*/ - nota2/*grade2*/;
    printf("O valor absoluto da diferenca de %d e %d eh: %d", nota1, nota2, abs(diferenca));//The absolute value of the difference of %d and %d is

}
