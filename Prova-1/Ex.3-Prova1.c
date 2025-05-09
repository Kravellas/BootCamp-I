#include<stdio.h>
int main(){
    float in_c, in_f, tc, tf;
    int escolha;
    printf("Escolha a unidade, digite 1 para Fahrenheit ou digite 2 para Celsius:");
    scanf("%d", &escolha);
    if(escolha==1){
        printf("Defina a temperatura em Fahrenheit que deseja converter:");
        scanf("%f", &in_f);
        tc = (5*(in_f - 32))/9;
        printf("A converscao de %.1f Graus Fahrenheit em Graus Celsius e: %.1f", in_f, tc);
    }
    else if(escolha==2){
        printf("Defina a temperatura em Celsius que deseja converter:");
        scanf("%f", &in_c);
        tf = ((9*in_c)/5)+32;
        printf("A converscao de %.1f Graus Celsius em Graus Fahrenheit e: %.1f", in_c, tf);
    }
    return 0;
}