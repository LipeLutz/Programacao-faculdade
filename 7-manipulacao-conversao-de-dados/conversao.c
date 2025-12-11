#include <stdio.h>

int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // "a" é implicitamente convertido em float
    
    printf("Resultado: %.2f\n", resultado);

    int x = 10;
    float y = 3;
    float quociente = (float ) x / y; // "x" é explicitamente convertido em float
    
    printf("Quociente: %.2f\n", quociente);

    return 0;
}