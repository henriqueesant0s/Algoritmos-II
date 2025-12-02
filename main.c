#include <stdio.h>
#include "pessoa.h"

int main() {
    char nome[50];
    int idade;
    
    // Ler o nome
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    // Ler a idade
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Criar a pessoa usando a função
    Pessoa p = criarPessoa(nome, idade);

    // Mostrar os dados da pessoa
    mostrarPessoa(p);

    return 0;
}
