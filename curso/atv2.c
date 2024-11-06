#include <stdio.h>

int main(){

    //declaração de variaveis
    int idade;

    //entrada
    printf("qual a sua idade?\n");
    scanf("%d", &idade);

    //processamento
    if(idade < 18){
        printf(" vc é menor de idade\n");
    }else if(idade > 18 && idade < 60){
        printf("vc é adulto\n");
    }else{
        printf("vc é idoso\n");
    }

    //saida
     printf("sua idade é %d\n", idade);
     
    return 0;
}