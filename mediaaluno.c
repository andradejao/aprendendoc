#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    float n4;
    float resultado;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &n3);

    printf("Digite a quarta nota do aluno: \n");
    scanf("%f", &n4);

        resultado = (n1 + n2 + n3 + n4) /4;

    printf("A média das notas do aluno é: %2.2f\n",resultado);

    return 0;

    }