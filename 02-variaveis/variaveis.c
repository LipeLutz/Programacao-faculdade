#include <stdio.h>

/* Regras para criação de variáveis */

// Só podem começar com sublinhado ou com letra (maiúsculas ou minúsculas, tanto faz), nunca com números
// Podemos usar números após o primeiro caractere
// Nomes de variáveis são sensíveis a maiúsculas e minúsculas. Isso significa que idade e Idade são variáveis diferentes.
// Não podemos usar palavras reservadas como nomes de variáveis, por exemplo: int return
// Devemos usar nomes que façam sentido e descrevam o propósito da variável. Isso torna seu código mais legível e fácil de entender. 


int main(){
    // int armazena valores INTEIROS
    int idade = 25;
    int quantidade = 1;

    // float armazena valores DECIMAIS
    float altura = 1.75;

    // double também armazena valores DECIMAIS, porém em maior quantidade de casas, entregando mais precisão
    double peso = 90.33;

    // char é usado para armazenar 1 CARACTERE
    char letra = 'A';

    // Para armazenar mais de 1 CARACTERE, devemos usar um array de char, e dizer o tamanho da string que vamos querer
    char nome[7] = "Felipe";
}