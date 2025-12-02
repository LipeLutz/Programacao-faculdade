#include <stdio.h>

/* Tabela de especificadores de formato */
/*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %u: Imprime um inteiro decimal sem sinal (apenas valores positivos).
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia de caracteres (string)
    %x ou %X: Imprime um inteiro hexadecimal.
    %%: Imprime um sinal de porcentagem literal. 
*/

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "sergio";

    /* Entrada de dados com variáveis */
    // scanf("Formato1", "Formato2", &variavel1, &variavel2, ...)

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite uma letra de sua preferência: ");
    scanf(" %c", &opcao);

    printf(" Seu nome é: %s\n Sua idade é: %d\n Sua altura é: %f\n Sua letra escolhida é: %c\n", nome, idade, altura, opcao);
}