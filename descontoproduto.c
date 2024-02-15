#include <stdio.h>

int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;

    printf("Digite o preço do produto: \n");
    scanf("%f", &preco);
    printf("Digite o desconto para o produto: \n");
    scanf("%f", &percentual);

    resultado = preco - (preco * (percentual / 100));
   
   vdesc = preco - resultado;

    printf("O preço final do produto com o desconto de R$%2.2f aplicado é: R$%2.2f\n",vdesc,resultado);

    return 0;

}