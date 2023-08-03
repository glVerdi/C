#include <stdio.h>
#include <stdlib.h>

void main(){

    int ladoA/*sideA*/, ladoB/*sideB*/, ladoC/*sideC*/;
    printf("Digite o primeiro lado: ");//Enter the first side
    scanf("%d", &ladoA/*sideA*/);
    printf("Digite o segundo lado: ");//Enter the second side
    scanf("%d", &ladoB/*sideB*/);
    printf("Digite o terceiro lado: ");//Enter the third side
    scanf("%d", &ladoC/*sideC*/);
    if(ladoA/*sideA*/ == ladoB/*sideB*/ && ladoB/*sideB*/ == ladoC/*sideC*/){
        printf("O triangulo eh equilatero");//The triangle is equilateral
    }else if(ladoA/*sideA*/ == ladoB/*sideB*/ || ladoA/*sideA*/ == ladoC/*sideC*/ || ladoB/*sideB*/ == ladoC/*sideC*/){
        printf("O triangulo eh isoceles");//The triangle is isosceles
    }else{
        printf("O triangulo eh escaleno");//The triangle is scalene
}
