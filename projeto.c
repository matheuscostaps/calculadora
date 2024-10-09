#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }
    
}
