#include <stdio.h>

int conversor(int horas, int min, int seg); //função para converter o numero.
int total; //para o total da operação.

int main() {

    int horas, min, seg; //declaração de variaveis. 

    printf("Digite que horas sao em: horas, minutos e segundos: ");
    scanf("%d %d %d", &horas, &min, &seg);
    
    total = conversor(horas, min, seg); //chamando a função dentro do main para poder imprimir para o usuario.

    printf("O total de segundos eh: %d", total);

    return 0;
}

int conversor(int horas, int min, int seg) { //inicialização da função.

    return(total = horas * 3600 + (min * 60) + (seg)); //operação principal do programa.
}