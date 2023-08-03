#include <stdio.h>
#include <stdlib.h>

void main(){

    //Average between two grades
    float nota1/*grade1*/, nota2/*grade2*/, media/*averege*/;
    printf("Digite a primeira nota: ");//Enter the first grade
    scanf("%f", &nota1/*grade1*/);
    printf("Digite a segunda nota: ");//Enter the second grade
    scanf("%f", &nota2/*grade2*/);
    media/*average*/ = (nota1/*grade1*/ + nota2/*grade2*/) / 2;
    printf("A media entre a %f e %f eh: %f", nota1, nota2, media);//The average between %f and %f is

}
