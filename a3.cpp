#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, novoSalario;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    novoSalario = salario * 1.37;

    printf("\nSalário com aumento de 37%%: R$ %.2f\n", novoSalario);

    return 0;
}

