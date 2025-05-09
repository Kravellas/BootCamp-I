//1
#include <stdio.h>
int main(){
	printf ("Nome");
	return 0;
}
//2
#include <stdio.h>
int main(){
	char nome [100];
	char sobrenome [100];
	printf("Digite seu primeiro nome e sobrenome: ");
	scanf("%s", nome);
	printf("%s", nome);
	scanf(" %s", &sobrenome);
	printf(" %s", sobrenome);
	return 0;
}
//3
#include <stdio.h>
int main(){
	printf("0       0\n 0     0\n  0   0 \n   0 0  \n    0   \n   0 0  \n  0   0 \n 0     0\n0       0\n");
	return 0;
}
//4
#include <stdio.h>
int main(){
float diaAn, mesAn, diaHj, mesHj, dias_faltam, dias_passaram;
diaHj = 3;
mesHj = 4;
printf("Digite o dia do seu aniversario: ");
scanf("\n%f", &diaAn);
printf("Digite o mes do seu aniversario em numeros: ");
scanf("\n%f", &mesAn);
if(mesAn == mesHj){
if(diaAn == diaHj){
printf ("ebaaaaa feliz aniversário!! ");
    }
else if(diaAn > diaHj){
dias_faltam = diaAn - diaHj;
printf("faltam %f dias pro seu aniversario.", dias_faltam);
   }
   else{
    dias_passaram = diaHj - diaAn;
    printf("passaram %f dias do seu aniversario.", dias_passaram);
    }
}
else if(mesAn == 5){
printf("faltam %f dias pro seu aniversario", diaAn + 27);
}
else if(mesAn == 6){
printf("faltam %f dias pro seu aniversario", diaAn + 58);
}
else if(mesAn == 7){
printf("faltam %f dias pro seu aniversario", diaAn + 88);
}
else if(mesAn == 8){
printf("faltam %f dias pro seu aniversario", diaAn + 119);
}
else if(mesAn == 9){
printf("faltam %f dias pro seu aniversario", diaAn + 149);
}
else if(mesAn == 10){
printf("faltam %f dias pro seu aniversario", diaAn + 179);
}
else if(mesAn == 11){
printf("faltam %f dias pro seu aniversario", diaAn + 210);
}
else if(mesAn == 12){
printf("faltam %f dias pro seu aniversario", diaAn + 240);
}
else if(mesAn == 3){
printf("passaram %f dias do seu aniversario", 34 - diaAn);
}
else if(mesAn == 2){
printf("passaram %f dias do seu aniversario", 64 - diaAn);
}
else if(mesAn == 1){
printf("passaram %f dias do seu aniversario", 95  - diaAn);
}
return 0;
}

//5
#include <stdio.h>
int main(){
    int letra;
    int valor_final;
    int desconto;
    printf("Digite um letra:");
    scanf("%c", &letra);
    desconto = (20 * letra/100);
    valor_final = letra - (desconto);
    printf("O preco original do produto e: %c\n", letra);
    printf("Voce ganhou R$ %c de desconto\n", desconto);
    printf("O preco final do seu produto com desconto e : %c", valor_final);
    return 0;
}
//6
#include <stdio.h>
int main(){
    int letra;
    int valor_final;
    int desconto;
    int valor_desconto;
    printf("Digite um letra:");
    scanf("%c", &letra);
    printf("Qual a porcentagem de desconto desejada:");
    scanf("%c", &valor_desconto);
    desconto = (valor_desconto * letra/100);
    valor_final = letra - (desconto);
    printf("O preco original do produto e: %c\n", letra);
    printf("Voce ganhou R$ %c de desconto\n", desconto);
    printf("O preco final do seu produto com desconto e : %c", valor_final);
    return 0;
}
//7
#include<stdio.h>
int main(){
    int letra1, letra2, letra3;
    int media;
    printf("Digite 3 letras:");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    media = (letra1 + letra2 + letra3)/3;
    printf("media = %c", media);
    return 0;
}
//8
#include<stdio.h>
#include <math.h>  // Biblioteca necessária para usar a função pow()
int main() {
    int letra1, letra2, letra3, letra4;
    int media_s, media_g, media_h;
    printf("Digite quatro números: ");
    scanf("%c %c %c %c", &letra1, &letra2, &letra3, &letra4);
    media_s = (letra1 + letra2 + letra3 + letra4) / 4.0;
    media_g = pow(letra1 * letra2 * letra3 * letra4, 1.0 / 4.0);  
    media_h = 4.0 / ((1.0 / letra1) + (1.0 / letra2) + (1.0 / letra3) + (1.0 / letra4));
    printf("Média simples = %c\n", media_s);
    printf("Média geométrica = %c\n", media_g);
    printf("Média harmônica = %c\n", media_h);

    return 0;
}
//9
#include <stdio.h>
#include <math.h>
int main() {
    int letra1, letra2, letra3, letra4;
    int media, variancia, desvio;
    printf("Digite 4 letras inteiros: ");
    scanf("%c %c %c %c", &letra1, &letra2, &letra3, &letra4);
    media = (letra1 + letra2 + letra3 + letra4) / 4;
    variancia = ((pow(letra1 - media, 2)) + (pow(letra2 - media, 2)) + (pow(letra3 - media, 2)) + (pow(letra4 - media, 2))) / 4;
    desvio = (int)pow(variancia, 0.5);
    printf("Média = %c\n", media);
    printf("Variância = %c\n", variancia);
    printf("Desvio padrão = %c\n", desvio);
    return 0;
}
//10
#include<stdio.h>
int main(){
    int letra1, letra2, letra3;
    printf("Digite 3 letras:");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    if(letra1>letra2 && letra1>letra3){
        printf("%c e o maior letra", letra1);
    }
    else if(letra2>letra1 && letra2>letra3){
        printf("%c e o maior letra", letra2);
    }
    else if(letra3>letra1 && letra3>letra2){
        printf("%c e o maior letra", letra3);
    }
    else{
        printf("Nao tem um letra maior");
    }
    return 0;
}
//11
#include<stdio.h>
int main(){
    int letra1, letra2, letra3;
    printf("Digite 3 letras:");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    if(letra1>letra2 && letra2>letra3){
        printf("Ordem crescente = %c %c %c", letra1, letra2, letra3);
    }
    else if(letra1<letra3 && letra3<letra2){
        printf("Ordem crescente = %c %c %c", letra1, letra3, letra2);
    }
    else if(letra2<letra1 && letra1<letra3){
        printf("Ordem crescente = %c %c %c", letra2, letra1, letra3);
    }
    else if(letra2<letra3 && letra3<letra1){
        printf("Ordem crescente = %c %c %c", letra2, letra3, letra1);
    }
    else if(letra3<letra1 && letra1<letra2){
        printf("Ordem crescente = %c %c %c", letra3, letra1, letra2);
    }
    else if(letra3<letra2 && letra2<letra1){
        printf("Ordem crescente = %c %c %c", letra3, letra2, letra1);
    }
    return 0;
}
//12
#include<stdio.h>               //anotação pessoal você não precisa dar um numero pra cada letra o probrama as entende atravez do codigo de cada uma
int main(){
    char letra1, letra2, letra3;
    printf("Digite 3 letars:");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    if(letra1<letra2 && letra2<letra3){
        printf("Ordem crescente = %c %c %c", letra1, letra2, letra3);
    }
    else if(letra1<letra3 && letra3<letra2){
        printf("Ordem crescente = %c %c %c", letra1, letra3, letra2);
    }
    else if(letra2<letra1 && letra1<letra3){
        printf("Ordem crescente = %c %c %c", letra2, letra1, letra3);
    }
    else if(letra2<letra3 && letra3<letra1){
        printf("Ordem crescente = %c %c %c", letra2, letra3, letra1);
    }
    else if(letra3<letra1 && letra1<letra2){
        printf("Ordem crescente = %c %c %c", letra3, letra1, letra2);
    }
    else if(letra3<letra2 && letra2<letra1){
        printf("Ordem crescente = %c %c %c", letra3, letra2, letra1);
    }
    return 0;
}
//13
#include<stdio.h>
int main(){
    int genero, peso, altura, idade;
    float tmb;
    printf("Escolha o genero 1 = homem ou 2 = mulher:");
    scanf("%d", &genero);
    printf("Informe o seu peso em kg:");
    scanf("%d", &peso);
    printf("Informe sua altura em cm:");
    scanf("%d", &altura);
    printf("Informe sua idade:");
    scanf("%d", &idade);
    if(genero == 1){
        tmb = 66.47 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
        printf("Sua TMB e igual a: %f", tmb);
    }else if(genero == 2){
        tmb = 655.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade);
        printf("Sua TMB e igaul a: %f", tmb);
    }
    return 0;
}
//14
#include<stdio.h>
int main (){
    int numero, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    x1 = 1*numero, x2= 2*numero, x3 = 3*numero, x4 = 4*numero, x5 = 5*numero, x6 = 6*numero, x7 = 7*numero, x8 = 8*numero, x9 = 9*numero, x10 = 10*numero;
    printf("%d %d %d %d %d %d %d %d %d %d", x1, x2, x3, x4, x5, x6, x7, x8, x9,x10);
}
