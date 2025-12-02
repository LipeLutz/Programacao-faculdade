#include <stdio.h>

int main(){
    char nome[10];
    int matricula;
    float nota1, nota2, nota3, nota4, somaNotas, calculoMedia;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite o número da sua matrícula: ");
    scanf("%d", &matricula);

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Suas primeira nota foi: %f", nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Digite sua quarta nota: ");
    scanf("%f", &nota4);

    somaNotas = nota1 + nota2 + nota3 + nota4;

    calculoMedia = somaNotas / 4;

    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);    
    printf("Média anual: %.2f", calculoMedia);

    return 0;
}