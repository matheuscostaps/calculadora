#include <stdio.h>
#include <math.h>

int main() {
    char operador;
    double num1, num2, resultado;
    char continuar;

    do {
        printf("Digite a operação (+, -, *, /, ^, r para raiz quadrada): ");
        scanf(" %c", &operador);

        if (operador == 'r') {
            printf("Digite o número: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Erro: Raiz quadrada de número negativo!\n");
            } else {
                resultado = sqrt(num1);
                printf("Resultado: %.2lf\n", resultado);
            }
        } else {
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
                case '^':
                    resultado = pow(num1, num2);
                    printf("Resultado: %.2lf\n", resultado);
                    break;
                default:
                    printf("Operador inválido!\n");
            }
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's');
    
    return 0;
}

