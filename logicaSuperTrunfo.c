#include <stdio.h>
#include <locale.h>
    // Desafio nivel mestre
int main() {
    setlocale(LC_ALL, "portuguese");

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

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Escolha dos atributos para comparação
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%d", &atributo1);

    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        switch (atributo1) {
            case 1: printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
            case 2: printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
            case 3: printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
            case 4: printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
            case 5: printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n6 - PIB per Capita\n"); break;
            case 6: printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n"); break;
            default: printf("Opção inválida.\n"); break;
        }
        printf("Digite a opção (1-6): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) printf("Erro: os atributos devem ser diferentes!\n");
    } while (atributo2 == atributo1);

    // Associação dos valores dos atributos escolhidos
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
    }

    // Consideração da exceção da densidade (quanto menor, melhor)
    float comp1_carta1 = (atributo1 == 5) ? -valor1_carta1 : valor1_carta1;
    float comp1_carta2 = (atributo1 == 5) ? -valor1_carta2 : valor1_carta2;
    float comp2_carta1 = (atributo2 == 5) ? -valor2_carta1 : valor2_carta1;
    float comp2_carta2 = (atributo2 == 5) ? -valor2_carta2 : valor2_carta2;

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos resultados
    printf("\nComparando os atributos escolhidos:\n");

    printf("\nCarta 1 - %s:\n", nomeCidade1);
    printf("Atributo %d: %.2f\n", atributo1, valor1_carta1);
    printf("Atributo %d: %.2f\n", atributo2, valor2_carta1);
    printf("Soma Total: %.2f\n", soma1);

    printf("\nCarta 2 - %s:\n", nomeCidade2);
    printf("Atributo %d: %.2f\n", atributo1, valor1_carta2);
    printf("Atributo %d: %.2f\n", atributo2, valor2_carta2);
    printf("Soma Total: %.2f\n", soma2);

    printf("\nResultado Final:\n");
    if (soma1 > soma2)
        printf("Carta 1 - %s venceu!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Carta 2 - %s venceu!\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}