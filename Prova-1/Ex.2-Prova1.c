#include<stdio.h>
int main(){
    int positivo = 0;
    int negativo = 0;
    int num;
    printf("Digite numeros inteiros(zero para parar):");
    scanf("%d", &num);
    while(num!=0){
        if(num>0){
            positivo++;
        }
        else{
            negativo++;
        }
        printf("Digite numeros inteiros(zero para parar):");
        scanf("%d", &num);
    }
    printf("Foram digitados %d numeros positivos e %d negativos\n", positivo, negativo);
    if(positivo>negativo){
        printf("Foram digitados mais numeros positivos");
    }
    else if(positivo<negativo){
        printf("Foram digitados mais numeros negativos");
    }
    else{
        printf("Foram digitados a mesma quantidade de numeros positivos e negativos");
    }
    return 0;
}