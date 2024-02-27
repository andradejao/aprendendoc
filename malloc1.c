#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_int;
    ptr_int = (int *)malloc(sizeof(int));
    printf("Endereço reservado em: %p \n", ptr_int);

    if(ptr_int == NULL){
        printf("ERRO AO TENTAR ALOCAR MEMÓRIA \n");
        return 1; //serve para parar a execução do programa
    }
    printf("Digite um número inteiro: \n");
    scanf("%d",ptr_int);

    printf("O valor digitado é %d e está em %p \n", *ptr_int, ptr_int);
    free(ptr_int);
    return 0;

}