#include <stdio.h>

int main(){

    int n1, n2, n3, soma;

    printf("Digite 3 valores: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    soma = n1 + n2 + n3;

    printf("A soma é: %d", soma);

    return 0;
}