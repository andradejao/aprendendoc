#include <stdio.h>
#include <math.h>

int main() {
    int bas, exp, i, b;
    printf("Digite um número para definir a base da potência: \n");
    scanf("%d", &bas);
    
    printf("Digite um número para definir o expoente: \n");
    scanf("%d", &exp);

    b = bas;

    for( i = 1; i<exp; i++){
        // bas *= b
        bas = bas * b;

    }
        printf("%d", bas);
        
return 0;
}