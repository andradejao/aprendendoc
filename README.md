# Estudo da Linguagem C
## Nesse repositório será publicado arquivos codificados em C   
<img src="https://codigo35.com/wp-content/uploads/2023/09/695px-C_Programming_Language.svg_.png" heigth="150" width= "150">
 
### Abaixo será apresentado os arquivos do repósitorio:
 
#### Hello, World
 
 
```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0;
}

```
 
#### Primeiro Programa
 
```c
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

```
 
#### Operações
 
```c
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

```
 
#### Desconto do Produto
 
```c
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
```
 
#### Média do Aluno
 
```c
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
 
```
#### Par e Impar 
```c
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

return 0;
}

```

#### Desvio de Fluxo: Aprovação

```c
/*
Esse programa calcula a nota média do aluno. Terá a entrada de 4 notas, depois será feito o cálculo da média, onde irá somar as notas e depois dividir por 4. Se o aluno tiver uma média acima ou igual a 7, então estará aprovado. Caso o aluno tenha uma nota menor ou igual a 4, então o aluno estará reprovado. Caso contrário, estará em recuperação.
*/

#include <stdio.h>

int main(){
    float n1, n2, n3, n4, md;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    printf("Digite a quarta nota: \n");
    scanf("%f", &n4);

    md = (n1 + n2 + n3 + n4) / 4;

    printf("A nota média do aluno é: %2.2f \n", md);

    if(md >= 7){
    printf("Aprovado \n");
    }
    else if (md <= 4){
        printf("Reprovado \n");
    }
    else{
        printf("Recuperação \n");
    }

return 0;

}
```

#### Ano Bissexto

```c
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
```