#include <stdio.h>

int main() {

// Declare as variáveis para a primeira carta aqui:

    char estado1;
    char codigo1[4]; // Ex: A01, B03 – 3 caracteres + '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf(" Cadastro da Carta 1 \n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

        // === Cálculos da Carta 1 ===
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;


    printf("\n => Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


// Declare as variáveis para a segunda carta aqui:

    char estado2;
    char codigo2[4]; // Ex: A01, B03 – 3 caracteres + '\0'
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf(" Cadastro da Carta 2 \n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

  // === Cálculos da Carta 2 ===
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n => Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);




    return 0;
}
