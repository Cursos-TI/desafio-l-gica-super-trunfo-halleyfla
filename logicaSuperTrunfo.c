#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

        // Entrada de dados da carta 1
        printf("Cadastro da Carta 1:\n");
        printf("Informe o estado (A a H): ");
        scanf(" %c", &estado1);
    
        printf("Informe o código da carta (ex: A01): ");
        scanf("%s", codigo1);
    
        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", nomeCidade1);
    
        printf("Informe a população da cidade: ");
        scanf("%d", &populacao1);
    
        printf("Informe a área da cidade (em km²): ");
        scanf("%f", &area1);
    
        printf("Informe o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &pib1);
    
        printf("Informe o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos1);
    
        // Entrada de dados da carta 2
        printf("\nCadastro da Carta 2:\n");
        printf("Informe o estado (A a H): ");
        scanf(" %c", &estado2);
    
        printf("Informe o código da carta (ex: B02): ");
        scanf("%s", codigo2);
    
        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", nomeCidade2);
    
        printf("Informe a população da cidade: ");
        scanf("%d", &populacao2);
    
        printf("Informe a área da cidade (em km²): ");
        scanf("%f", &area2);
    
        printf("Informe o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &pib2);
    
        printf("Informe o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos2);

        // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    

 

    return 0;
}
