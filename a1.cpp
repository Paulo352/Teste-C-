#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    float media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("\nA média dos três valores é: %.2f\n", media);

    return 0;
}
