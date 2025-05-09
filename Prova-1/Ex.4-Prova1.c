#include <stdio.h>
int main() {
    int n;
    printf("Digite um número inteiro maior que 5 para desenhar a letra T: ");
    scanf("%d", &n);
    if (n <= 5) {
        printf("O número n deve ser maior que 5.\n");
        return 1; // Indica erro
    }
    printf("Desenho da letra T com %d linhas:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == n / 2) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}