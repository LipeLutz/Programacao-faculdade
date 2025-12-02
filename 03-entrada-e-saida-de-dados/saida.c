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
    // Sintaxe padrão para saída de dados
    printf("Olá, mundo!\n");

    /* Saída de dados com variáveis */
    // printf("texto com formatação", variável1, variável2, ...)

    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "sergio";

    printf("A idade do %s é: %d\n ", nome, idade);
    // Podemos definir no número de casas decimais que queremos imprimir na tela, colocando um . e o número de casas que queremos entre o símbolo de porcentagem e o especificador de formato
    printf("A altura é: %.2f\n ", altura);
    printf("A opção é: %c\n ", opcao);
    return 0;
}
