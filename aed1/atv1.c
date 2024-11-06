/*Faça um programa em C que receba 3 números
inteiros e retorne:
 O maior dos 3;
 O menor dos 3;
 Quais são positivos e quais são negativos;
 Quais são pares e quais são ímpares.*/

#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &n1, &n2,&n3);

    if(n1 >= n2 && n1 >= n3){
        printf("%d e o maior\n",n1);
        if(n2 <= n3){
            printf("%d e o menor\n",n2);
        }else{
            printf("%d e o menor\n",n3);
        }
    }
    if(n2 > n1 && n2 >= n3){
        printf("%d e o maior\n",n2);
        if(n1 <= n3){
            printf("%d e o menor\n",n1);
        }else{
            printf("%d e o menor\n",n3);
        }
    }
    if(n3 > n1 && n3 > n2){
        printf("%d e o maior\n",n3);
        if(n1 <= n2){
            printf("%d e o menor\n",n1);
        }else{
            printf("%d e o menor\n",n2);
        }
    }
    
    
    return 0;
}