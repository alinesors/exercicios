/*Crie um programa em C que gera os
elementos de uma P.A pedindo ao usuário o número de elementos da P.A, sua razão
e seu elemento inicial. Imprima apenas o enésimo elemento.
- Lembrando que a fórmula do n-ésimo
termo da P.A é:
 an = a1 + (n-1)*razão
- Imprima an*/

#include <stdio.h>

int main(){

    int numElementos, i;
    double razao, elementoInicial, an, somatorio = 0;

    printf("Para gerar elementos de uma P.A digite:\n");
    printf("numero de elementos:\n");
    scanf("%d", &numElementos);
    
    printf("razao:\n");
    scanf("%lf", &razao);
    
    printf("elemento incial:\n");
    scanf("%lf", &elementoInicial);

    an = elementoInicial + (numElementos-1)*razao;
    printf("\nO n-esimo elemento da P.A: %.2lf\n", an);

    /*printf("\nElementos da P.A:\n");
    for(i = 0; i < numElementos; i++){
        an = elementoInicial + (i*razao);
        printf("\nO n-esimo elemento da P.A: %.2lf\n", an);
        printf("\nO elemento %d da P.A: %.2lf\n", i, an);
        somatorio = somatorio + an;
    }
     printf("\no somatorio da P.A: %.2lf\n", somatorio);*/

    return 0;
}