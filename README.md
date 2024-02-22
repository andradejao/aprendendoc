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

#### While1

```c
#include <stdio.h>

int main(){
    int i = 0;
    
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }
return 0;

}
```

#### While Bissexto

```c
#include <stdio.h>

int main(){
    int ano = 1950;
    int qtd = 0;

    while (ano <= 2024){
        if(ano % 4 == 0){
        printf("O ano %d é bissexto \n",ano);
        qtd++;
        }
        ano++;
    }
    printf("Temos %d anos bissextos \n",qtd);
return 0;
}
```

#### While Dec-Bin

```c
#include <stdio.h>
    
int main(){
    int dec = 24;
    int resto = 0;
    int pos = 1;
    int rs = 0;

    while(dec > 0){
        resto = dec % 2;
        dec = dec / 2;
        rs = rs + pos * resto;
        pos = pos * 10;
        
    }
    printf("%d \n", rs);

return 0;
    }
```

#### While Bin-Dec

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int bin[6] = {1, 0, 1, 1, 1, 0};
    int rs = 0;
    int pos = 0;
    int exp = 5;

    while (pos <= 5)
    {
        rs += bin[pos] * (pow(2, exp));
        pos++;
        exp--;
    }
    printf("%d \n", rs);
    return 0;

    return 0;
}
```

#### Coleções Iguais 

```c
#include <stdio.h>

int main()
{
    int c1[10] = {10, 5, 68, 8, 47, 12, 54, 13, 62, 11};
    int c2[15] = {11, 5, 62, 112, 84, 76, 12, 55, 59, 85, 13, 0, 14, 19, 18};
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (c1[i] == c2[j])
            {
                printf("%d é idêntico em ambas as coleções \n", c2[j]);
            }
        }
    }

    return 0;
}

```

#### Coleção 1

```c
// Array é um conjunto de dados sobre um determinado assunto. Pode-se utilizar valores numéricos, textos, datas ou objetos.

#include <stdio.h>

int main()
{
    int valores[5] = {10, 5, 8, 12, 7};
    printf("%d \n", valores[0]);

    return 0;
}
```

#### Coleção 2
 ```c
 #include <stdio.h>

int main()
{

    int loud[10] = {1, 21, 11, 8, 19, 45, 7, 24, 26, 18};
    int soma = 0, media = 0, i;

    for (i = 0; i <= 9; i++)
    {
        soma += loud[i];
    }
    printf("O resultado da soma é: %d \n", soma);

    for (i = 0; i < 10; i++)
    {
        media += loud[i];
    }
    printf("O resultado da média é: %d \n", (media / 10));

    for (i = 0; i < 10; i++)
    {
        if (loud[i] % 2 == 0)
        {
            printf("O número %d é par \n", loud[i]);
        }
    }

    return 0;
}
 ```

 #### Base Expoente 

 ```c
 #include <stdio.h>
#include <math.h>

int main()
{
    int bas, exp, i, b;
    printf("Digite um número para definir a base da potência: \n");
    scanf("%d", &bas);

    printf("Digite um número para definir o expoente: \n");
    scanf("%d", &exp);

    b = bas;

    for (i = 1; i < exp; i++)
    {
        // bas *= b
        bas = bas * b;
    }
    printf("%d", bas);

    return 0;
}
 ```

 #### For 1

 ```c
 #include <stdio.h>

int main()
{
    int x;
    for (x = 1; x <= 10; x++)
    {
        printf("%d \n", x);
    }

    return 0;
}
 ```

 