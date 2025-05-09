//1
#include <stdio.h>
int main() {
    int num = 0;
    int soma = 0;
    int divisor = 0;
    float media;
    printf("Digite numeros inteiros (digite um numero negativo para parar)\n");
    scanf("%d", &num);
    while (num >= 0) {
        if (num >= 0) {
            soma += num;
            divisor++;
        }
        printf("Digite numeros inteiros (digite um numero negativo para parar):");
        scanf("%d", &num);
    }
    if (divisor > 0) {
        media = soma / divisor;
        printf("\nA media dos numeros digitados e: %f\n", media);
    } else {
        printf("\nNenhum numero positivo foi digitado.\n");
    }
    return 0;
}

//2
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
    printf("Foram digitados %d numeros positivos e %d negativos", positivo, negativo);
    return 0;
}

//3
#include <stdio.h>
int main(){
    int nota;
    printf("Digite uma nota entre zero e dez: ");
    scanf("%d", &nota);
    while (nota < 0 || nota > 10){
        printf("Nota invalida tente novamente\n");
        printf("Digite uma nota entre zero e dez: ");
        scanf("%d", &nota);
    }
    printf("valido\n");
    return 0;
}

//4
#include <stdio.h>
int main() {
    int orcamento;
    int servico;
    printf("Digite um orçamento: ");
    scanf("%d", &orcamento);
    while (orcamento > 0) {
        printf("Seu orçamento atual é %d\n", orcamento);
        printf("Valor do serviço: ");
        scanf("%d", &servico);
        orcamento = orcamento - servico;
        if (orcamento < 0) {
            printf("O orçamento estourou, não poderá fazer mais serviços\n");
            orcamento = 0; 
        }
    }
    printf("O seu orçamento acabou, não poderá ser feito mais serviços\n");
    return 0;
}

//5
#include<stdio.h>
int main(){
    int base, expoente;
    int resultado=1;
    int cont=0;
    printf("Digite um numero inteiro para base:");
    scanf("%d", &base);
    printf("Digite um numero inteiro para expoente:");
    scanf("%d", &expoente);
    while(cont<expoente){
        resultado = base*resultado;
        cont++;
    }
    printf("%d elevado a %d e igual a: %d", base, expoente, resultado);
    return 0;
}

//6
#include <stdio.h>
int main(){
    int resultado, num;
    printf("Digite um numero:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++){
        resultado = i * num; 
        printf("%d ", resultado);
    }
    printf("\n");
    return 0;
}

//7
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero inteiro positivo n:");
    scanf("%d", &n);
    if (n == 1){
        printf("Sequrncia de Fibonacci ate o %d termo: 0\n", n);
    }
    else{
        int primeiro = 0, segundo = 1;
        int proximo;
        printf("Sequencia de Fibonacci até o %d termo: %d %d", n, primeiro, segundo);
        for (i = 3; i <= n; i++){
            proximo = primeiro + segundo;
            printf(" %d", proximo);
            primeiro = segundo;
            segundo = proximo;
        }
        printf("\n");
    }
    return 0;
}

//8
#include<stdio.h>
int main(){
    int n;
    int fat = 1;
    int i;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for(i = n; i > 1; i--){
        fat = fat * i;
        printf("%d ", fat);
    }
}

//9
#include<stdio.h>
int main(){
    int num;
    int result;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(1){
        result=num % 2;
        if(result==1){
            printf("primo\n");   
        }
        else if(num==2){
            printf("primo\n");
        }
        else{
            printf("nao primo");
            return 0;
        }
    printf("Digite um numero: ");
    scanf("%d", &num);
    }
    return 0;
}

//10
#include <stdio.h>
int main() {
    int num1, num2, x, y, resto, mmc, mdc;
    printf("Digite dois numeros inteiros e positivos: ");
    scanf("%d %d", &num1, &num2); 
    x = num1;
    y = num2;
    while (y != 0) {
        resto = x % y;
        x = y;
        y = resto;
    }
    mdc = x;
    mmc = (num1 * num2) / mdc;
    printf("MDC = %d\n", mdc);
    printf("MMC = %d\n", mmc);
    return 0;
}

//11
#include<stdio.h>
int main(){
    int razao, a1, an, n, i;
    printf("Razao da PA:");
    scanf("%d", &razao);
    printf("Primeiro termo da PA:");
    scanf("%d", &a1);
    printf("Digite o termo da PA:");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        an = a1 + i * razao;
        printf("%d ", an);
    }
    return 0;
}

//12
#include<stdio.h>
int main(){
    int razao, a1, an, a3, n, i;
    printf("Razao da PA:");
    scanf("%d", &razao);
    printf("Terceiro termo da PA(maior que 3):");
    scanf("%d", &a3);
    printf("Digite o termo da PA:");
    scanf("%d", &n);
    if(a3<4){
        printf("O terceiro termo tem que ser maior que 3");
        return 0;
    }
    a1 = a3 - 2*razao;
    for(i=0; i<n; i++){
        an = a1 + i * razao;
        printf("%d ", an);
    }
    return 0;
}

//13
#include<stdio.h>
int main(){
    int razao, an, a1, a4, n, i, soma;
    printf("Razao da PA:");
    scanf("%d", &razao);
    printf("Quarto termo da PA(inteiro):");
    scanf("%d", &a4);
    printf("Digite o termo da PA:");
    scanf("%d", &n);
    if(a4<0){
        printf("O quarto termo tem que ser positivo");
        return 0;
    }
    a1 = a4 - 3*razao;
    soma = (n*(2*a1 + (n-1)*razao))/2;
    printf("a soma dos %d primeiros termos da PA e:%d", n, soma);
    return 0;
}

//14
#include <stdio.h>
int main(){
    int razao = -2;
    int pt = 1;
    int num = 5;
    int i;
    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &pt);
    printf("Digite a razao da PG: ");
    scanf("%d", &razao);
    printf("Digite numero de termos da PG: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        printf("%d ", pt);
        pt = pt * razao;
    }
    return 0;
}

//15
#include<stdio.h>
#include<math.h>
int main(){
    int razao, an, a1, a3, soma, n, i;
    printf("Razao da PG:");
    scanf("%d", &razao);
    printf("Terceiro termo da PG(inteiro):");
    scanf("%d", &a3);
    printf("Digite o termo da PG:");
    scanf("%d", &n);
    a1 = a3/ pow(razao, 2);
    soma = 0;
    for(i=1; i<n; i++){
        an = a1*pow(razao, i-1);
        printf("%d ", an);
        soma += an;
    }
    printf("\nA soma dos %d primiros termos da PG e: %d", n, soma);
    return 0;
}

//16
#include <stdio.h>
int main(){
    float cap_ini, M, Mc, juros;
    int meses, j;
    printf("Digite o valor presente:");
    scanf("%f", &cap_ini);
    printf("Digite a taxa de juros mensais(em decimal): ");
    scanf("%f", &juros);
    printf("Digite o período em meses: ");
    scanf("%d", &meses);
    M = cap_ini;
    Mc = cap_ini;
    printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    for(j = 1; j <= meses; j++){
        M = cap_ini * (1 + juros*j);
        Mc = Mc * (1 + juros);
        printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    }
    return 0;
}

//17
#include <stdio.h>
int main(){
    float deposito, M, Mc, juros;
    int meses, j;
    printf("Digite o valor presente:");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros mensais(em decimal): ");
    scanf("%f", &juros);
    printf("Digite o período em meses: ");
    scanf("%d", &meses);
    M = deposito;
    Mc = deposito;
    printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    for(j = 1; j <= meses; j++){
        M = j*deposito + deposito*juros*(1 + j)*j/2 + deposito;
        Mc = Mc * (1 + juros) + deposito;
        printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    }
    return 0;
}

//18
#include <stdio.h>
#include <math.h>
#define MAX_PROVAS 1000
int main() {
    int n = 0, i;
    float notas[MAX_PROVAS];
    float soma = 0.0, media, desvioPadrao = 0.0;
    float nota;
    printf("Digite as notas das provas (digite E para finalizar, máximo de %d):\n", MAX_PROVAS);
    while (n < MAX_PROVAS && scanf("%f", &nota) == 1) {
        notas[n++] = nota;
        soma += nota;
    }
    printf("\nNúmero de provas inseridas: %d\n", n);
    if (n > 0) {
        media = soma / n;
        for (i = 0; i < n; i++) {
            desvioPadrao += pow(notas[i] - media, 2);
        }
        desvioPadrao = sqrt(desvioPadrao / n);
        printf("Média das notas: %.2f\n", media);
        printf("Desvio padrão das notas: %.2f\n", desvioPadrao);
    } else {
        printf("Nenhuma nota foi inserida.\n");
    }
    return 0;
}

//19
#include <stdio.h>
int main() {
    int decimal;
    int binario = 0, resto;
    int temp;
    int pot = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &decimal); // Corrigido o formato do scanf
    temp = decimal;
    while (decimal > 0) {
        resto = decimal % 2;
        binario = binario + resto * pot;
        pot = pot * 10;
        decimal = decimal / 2;
    }
    printf("%d = %d\n", temp, binario); 
    return 0;
}