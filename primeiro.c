/*
Este programa pede ao usuário um número inteiro qualquer e depois exibe o número na tela
*/ 

#include <stdio.h> // biblioteca para trabalhar com dispositivos de saída e entrada de dados

int main(){
    int idade; // declaração da variável do tipo inteiro
    printf("Digite a sua idade e aperte enter\n");
    scanf("%d",&idade);   // scanf é utilizado para capturar o valor digitado pelo usuário
                         // e adicionando o valor ao endereço de memória da variável idade.
                        // usamos o & para referenciar o endereço da variável idade

    printf("A idade digitada é %d\nO endereço da variável idade é %x\n",idade, &idade);
    return 0;
}