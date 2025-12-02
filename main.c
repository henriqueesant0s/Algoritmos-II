#include <stdio.h>
#include "conversor.h"

int main(void) {

    int opcao = -1;
    float temp, resultado;

    while (opcao != 0) {

        printf("------- Conversor de Temperatura ----------\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        
        scanf(" %d", &opcao);

        switch (opcao) {

            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temp);

                resultado = celsius_fahrenheit(temp);
                printf("Resultado: %.2f F\n", resultado);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temp);

                resultado = fahrenheit_celsius(temp);
                printf("Resultado: %.2f C\n", resultado);
                break;

            case 0:
                printf("Saindo do programa....\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

        printf("\n"); 
    }

    return 0;
}
