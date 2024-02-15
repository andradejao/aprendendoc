#include<stdio.h>

int main(){
    int n1; 
    int n2;
    int soma;
    int subtrair; 
    int multiplicar;
    int dividir;

    printf("Digite um número e aperte enter: \n");
    scanf("%d",&n1);
    printf("Digite outro número e aperte enter: \n");
    scanf("%d",&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("O resultado da soma é %d\n",soma);
    printf("O resultado da subtração é %d\n",subtrair);
    printf("O resultado da multiplicação é %d\n",multiplicar);
    printf("O resultado da divisão é %d\n",dividir);

    return 0;
}