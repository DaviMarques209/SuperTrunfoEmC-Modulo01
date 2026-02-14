#include <stdio.h>

int main() {

    char estado1, cidade1[30];
    int populacao1, pontosTuristicos1, codCarta1;
    float area1, pib1;

    char estado2, cidade2[30];
    int populacao2, pontosTuristicos2, codCarta2;
    float area2, pib2;

    printf("Carta 1\n");

    printf("Digite uma letra de A a H representando o estado: ");
    scanf(" %c", &estado1);

    printf("Digite um numero de 01 a 04: ");
    scanf("%d", &codCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    printf("\nCarta 2\n");

    printf("Digite uma letra de A a H representando o estado: ");
    scanf(" %c", &estado2);

    printf("Digite um numero de 01 a 04: ");
    scanf("%d", &codCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%02d\n", estado1, codCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%02d\n", estado2, codCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
