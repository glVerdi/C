#include <stdio.h>
#include <stdlib.h>

void main(){

    //Average between two notes
    float nota1/*note1*/, nota2/*note2*/, media/*averege*/;
    printf("Digite a primeira nota: ");//Enter the first note
    scanf("%f", &nota1/*note1*/);
    printf("Digite a segunda nota: ");//Enter the second note
    scanf("%f", &nota2/*note2*/);
    media/*average*/ = (nota1/*note1*/ + nota2/*note2*/) / 2;
    printf("A media entre a %f e %f eh: %f", nota1, nota2, media);//The average between %f and %f is

}
