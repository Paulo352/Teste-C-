#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoNasc, anoAtual, idadeAtual, idade2038;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAtual = anoAtual - anoNasc;
    idade2038 = 2038 - anoNasc;

    printf("\nSua idade atual é: %d anos\n", idadeAtual);
    printf("Sua idade em 2038 será: %d anos\n", idade2038);

    return 0;
}
