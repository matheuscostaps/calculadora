#include <stdio.h>
#include <math.h>

void print_header() {
    printf("\033[1;34m");
    printf("=====================================\n");
    printf("          CALCULADORA               \n");
    printf("=====================================\n");
    printf("\033[0m");
}

void print_result(double resultado) {
    printf("\033[1;32m");
    printf("Resultado: %.2lf\n", resultado);
    printf("\033[0m");
}

void print_error(const char* message) {
    printf("\033[1;31m");
    printf("Erro: %s\n", message);
    printf("\033[0m");
}

int main() {
    char operador;
    double num1, num2, resultado;
    char continuar;

    do {
        print_header();
        printf("Digite a operação (+, -, *, /, ^, r para raiz quadrada): ");
        scanf(" %c", &operador);

        if (operador == 'r') {
            printf("Digite o número: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                print_error("Raiz quadrada de número negativo!");
            } else {
                resultado = sqrt(num1);
                print_result(resultado);
            }
        } else {
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);

            switch (operador) {
                case '+':
                    resultado = num1 + num2;
                    print_result(resultado);
                    break;
                case '-':
                    resultado = num1 - num2;
                    print_result(resultado);
                    break;
                case '*':
                    resultado = num1 * num2;
                    print_result(resultado);
                    break;
                case '/':
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        print_result(resultado);
                    } else {
                        print_error("Divisão por zero!");
                    }
                    break;
                case '^':
                    resultado = pow(num1, num2);
                    print_result(resultado);
                    break;
                default:
                    print_error("Operador inválido!");
            }
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's');

    return 0;
}
