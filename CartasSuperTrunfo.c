#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Desafio Cartas Super Trunfo!!\n");

    printf("\n");                                       //Melhorar a visual do terminal.
    
    int tur = 5;
    float habitantes = 532.59;
    double area = 65295.54;
    char codigo = 'A';
    int numero = 1;
    char nome[30] = "Jaragua do Sul";
 

    printf("Nome: %s\n", nome);
    printf("Codigo da cidade: %c-%d\n", codigo,numero);
    printf("Pontos de turismo: %d locais\n", tur);
    printf("População: %.2f habitantes\n", habitantes);
    printf("Area Total: %.2f km²\n", area);
    printf("\n");                                               //Apenas pra me localizar melhor no terminal.



    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
