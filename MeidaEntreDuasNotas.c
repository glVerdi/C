#include <stdio.h>
#include <stdlib.h>

void main(){

    //Average between two notes
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A media entre a %f e %f eh: %f", nota1, nota2, media);

}
