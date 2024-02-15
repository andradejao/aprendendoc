#include <stdio.h>

int main(){
    int num;

    printf("Digite um ano: \n");
    scanf("%d", &num);

    if(num % 4 == 0){
        printf("O ano é bissexto \n");
    }
    else{
        printf("O ano não é bissexto \n");
    }
    
return 0;
}