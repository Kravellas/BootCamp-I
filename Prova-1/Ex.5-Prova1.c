#include <stdio.h>
int main(){
    int num1, num2;
    int a, b;
    int fatores_mmc[100];
    int num_fatores_mmc = 0;
    int divisor;
    int encontrou_divisor;
    printf("Digite dois numeros(inteiros e positivos): ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;
    printf("%d %d | ", a, b);
    divisor = 2;
    while(a > 1 || b > 1){
        encontrou_divisor = 0;
        if (a % divisor == 0 || b % divisor == 0){
            fatores_mmc[num_fatores_mmc++] = divisor;
            encontrou_divisor = 1;
            if (a % divisor == 0) a /= divisor;
            if (b % divisor == 0) b /= divisor;
            printf("%d\n%d %d | ", divisor, a, b);
        }
        if (!encontrou_divisor){
            divisor++;
        }
        if (divisor > a && divisor > b){
            a = 1;
            b = 1;
        }
    }
    printf("\n");
    int mmc = 1;
    printf("MMC(%d, %d)", num1, num2);
    for (int i = 0; i < num_fatores_mmc; i++){
        mmc *= fatores_mmc[i];
    }
    printf(" = %d\n", mmc);
    int mdc = 1;
    int temp_num1 = num1;
    int temp_num2 = num2;
    printf("MDC(%d, %d) = ", temp_num1, temp_num2);
    for (int i = 0; i < num_fatores_mmc; i++){
        if (temp_num1 % fatores_mmc[i] == 0 && temp_num2 % fatores_mmc[i] == 0){
            mdc *= fatores_mmc[i];
            temp_num1 /= fatores_mmc[i];
            temp_num2 /= fatores_mmc[i];
            printf("%d", fatores_mmc[i]);
            
        }
    }
    return 0;
}