
#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado;
    char t[3][4];
    char caractere;
    
    // Exemplo 1: Subtração de dois números
    printf("Digite o primeiro número para subtrair: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número para subtrair: ");
    scanf("%f", &numero2);
    resultado = numero1 - numero2;
    printf("O resultado da subtração é %f \n", resultado);
    
    // Exemplo 2: Divisão de dois números
    printf("Digite o primeiro número para dividir: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número para dividir: ");
    scanf("%f", &numero2);
    resultado = numero1 / numero2;
    printf("O resultado da divisão é %f \n", resultado);
    
    // Exemplo 3: Uso de matriz de caracteres
    t[2][0] = 'd';
    t[2][1] = 'q';
    t[1][0] = 'a';
    printf("Elemento [2][0]: %c \n", t[2][0]);
    printf("Elemento [2][1]: %c \n", t[2][1]);
    printf("Elemento [1][0]: %c \n", t[1][0]);
    
    // Exemplo 4: Multiplicação de dois números
    printf("Digite o primeiro número para multiplicar: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número para multiplicar: ");
    scanf("%f", &numero2);
    resultado = numero1 * numero2;
    printf("O resultado da multiplicação é %f \n", resultado);
    
    // Exemplo 5: Leitura de caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Espaço em branco antes de %c para ignorar espaços em branco e quebras de linha anteriores
    printf("Oi Ezequiel \n");
    
    // Exemplo 6: Potenciação de dois números
    printf("Digite a base: ");
    scanf("%f", &numero1);
    printf("Digite o expoente: ");
    scanf("%f", &numero2);
    resultado = pow(numero1, numero2);
    printf("O resultado da potenciação é %f \n", resultado);
    
    // Exemplo 7: Raiz quadrada de um número
    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%f", &numero1);
    resultado = sqrt(numero1);
    printf("A raiz quadrada é %f \n", resultado);

    // Exemplo 8: Adição de dois números
    printf("Digite o primeiro número para somar: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número para somar: ");
    scanf("%f", &numero2);
    resultado = numero1 + numero2;
    printf("O resultado da adição é %f \n", resultado);

    return 0;
}

