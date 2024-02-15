#include <stdio.h>

int main(){
    int num;

    printf("Digite um número inteiro e aperte enter: \n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número digitado é par \n");
    }
    else{
        printf("O número digitado é impar \n");
    }
}