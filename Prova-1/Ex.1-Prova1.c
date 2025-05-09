#include<stdio.h>
int main(){
    int ano_nasci, ano50, idade_ano25;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nasci);
    idade_ano25 = 2025 - ano_nasci;
    ano50 = ano_nasci +50;
    printf("Sua idade em 2025 e: %d\n", idade_ano25);
    if(idade_ano25>=50){
        printf("Voce fez 50 anos em %d", ano50);
    }
    else if(idade_ano25<50){
        printf("Voce fara 50 anos em %d", ano50);
    }
    return 0;
}