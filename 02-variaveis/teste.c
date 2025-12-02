#include <stdio.h>

int main(){
    char letra = 'F';
    char nome[] = "Felipe";

    printf("Letra inicial: %c\n", letra);
    printf("Nome: %s\n", nome);

    char proximaLetra = letra + 5;
    printf("Se contarmos 5 casas decimais após a letra F, teremos a letra %c\n", proximaLetra);

    return 0;
};