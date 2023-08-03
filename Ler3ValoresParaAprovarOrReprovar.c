#include <stdio.h>
#include <stdlib.h>

void main(){

    float nota1/*grade1*/, nota2/*grade2*/, nota3/*grade3*/, media/*average*/;
    printf("Digite a primeira nota: ");//Enter the first grade
    scanf("%f", &nota1/*grade1*/);
    printf("Digite a segunda nota: ");//Enter the second grade
    scanf("%f", &nota2/*grade2*/);
    printf("Digite a terceira nota: ");//Enter the third grade
    scanf("%f", &nota3/*grade3*/);
    media = (nota1/*grade1*/ + nota2/*grade2*/ + nota3/*grade3*/) / 3;
    printf("A media do aluno foi de: %.2f\n", media);//The average of the student was
    if(media/*average*/ >= 7){
        printf("O aluno foi aprovado");//The student was approves
    }else{
        printf("O aluno foi reprovado");//The student failed
    }

}
