
#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado;
    char t[3][4];
    char caractere;
    
    // Exemplo 1: Subtra��o de dois n�meros
    printf("Digite o primeiro n�mero para subtrair: ");
    scanf("%f", &numero1);
    printf("Digite o segundo n�mero para subtrair: ");
    scanf("%f", &numero2);
    resultado = numero1 - numero2;
    printf("O resultado da subtra��o � %f \n", resultado);
    
    // Exemplo 2: Divis�o de dois n�meros
    printf("Digite o primeiro n�mero para dividir: ");
    scanf("%f", &numero1);
    printf("Digite o segundo n�mero para dividir: ");
    scanf("%f", &numero2);
    resultado = numero1 / numero2;
    printf("O resultado da divis�o � %f \n", resultado);
    
    // Exemplo 3: Uso de matriz de caracteres
    t[2][0] = 'd';
    t[2][1] = 'q';
    t[1][0] = 'a';
    printf("Elemento [2][0]: %c \n", t[2][0]);
    printf("Elemento [2][1]: %c \n", t[2][1]);
    printf("Elemento [1][0]: %c \n", t[1][0]);
    
    // Exemplo 4: Multiplica��o de dois n�meros
    printf("Digite o primeiro n�mero para multiplicar: ");
    scanf("%f", &numero1);
    printf("Digite o segundo n�mero para multiplicar: ");
    scanf("%f", &numero2);
    resultado = numero1 * numero2;
    printf("O resultado da multiplica��o � %f \n", resultado);
    
    // Exemplo 5: Leitura de caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Espa�o em branco antes de %c para ignorar espa�os em branco e quebras de linha anteriores
    printf("Oi Ezequiel \n");
    
    // Exemplo 6: Potencia��o de dois n�meros
    printf("Digite a base: ");
    scanf("%f", &numero1);
    printf("Digite o expoente: ");
    scanf("%f", &numero2);
    resultado = pow(numero1, numero2);
    printf("O resultado da potencia��o � %f \n", resultado);
    
    // Exemplo 7: Raiz quadrada de um n�mero
    printf("Digite um n�mero para calcular a raiz quadrada: ");
    scanf("%f", &numero1);
    resultado = sqrt(numero1);
    printf("A raiz quadrada � %f \n", resultado);

    // Exemplo 8: Adi��o de dois n�meros
    printf("Digite o primeiro n�mero para somar: ");
    scanf("%f", &numero1);
    printf("Digite o segundo n�mero para somar: ");
    scanf("%f", &numero2);
    resultado = numero1 + numero2;
    printf("O resultado da adi��o � %f \n", resultado);

    return 0;
}

