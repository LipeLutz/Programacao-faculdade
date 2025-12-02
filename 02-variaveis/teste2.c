#include <stdio.h>

int main(){
    char nomeUsuario[10];

    printf("Digite seu nome: ");
    scanf("%s", nomeUsuario);
    printf("Seja bem vindo ao nosso sistema: %s\n", nomeUsuario);

    return 0;
}