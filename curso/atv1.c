#include <stdio.h>

int main() {

    int n1, n2, n3, somaIp = 0;

    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &n1,&n2,&n3);


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
    if(n1 % 2 == 0){
        printf("o quadrado de n1 e %d\n", n1*n1);
    }
    if(n2 % 2 == 0){
        printf("o quadrado do n2 e %d\n", n2*n2);
    }if(n3 % 2 == 0){
        printf("o quadrado de n3 e %d\n", n3*n3);
    }

    if(n1 % 2 != 0){
        somaIp = somaIp + n1;
    }
    if(n2 % 2 != 0){
        somaIp = somaIp + n2;
    }
    if(n3 % 2 != 0){
        somaIp = somaIp + n3;
    }
    printf("soma de impares: %d\n", somaIp);

    

    return 0;
}