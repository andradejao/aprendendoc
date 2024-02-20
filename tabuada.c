#include <stdio.h>

int main() {
    int num, mt;

    printf("Digite um número para a tabuada: \n");
    scanf("%d", &num);
    
    for(mt = 1; mt <=10; mt++){
        printf("%d x %d = %d \n", num, mt,(num * mt));
    }
return 0;
}