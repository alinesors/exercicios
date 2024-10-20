#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2,&n3);

    if(n1 > n2 && n1 > n3){
        printf("%d é o maior",n1);
        if(n2 > n3 && n2 > n1){
            printf("%d é o menor",n2);
        }else{
            printf("%d é o menor",n3);
        }
    }
    
    return 0;
}