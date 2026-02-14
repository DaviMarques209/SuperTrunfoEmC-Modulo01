#include <stdio.h>

int main() {

    char estado1, cidade1[30];
    int populacao1, pontosTuristicos1, codCarta1;
    float area1, pib1, densiPop1, pibPerCapita1;

    char estado2, cidade2[30];
    int populacao2, pontosTuristicos2, codCarta2;
    float area2, pib2, densiPop2, pibPerCapita2;

    printf("Carta 1\n");

    scanf(" %c", &estado1);
    scanf("%d", &codCarta1);
    scanf("%s", cidade1);
    scanf("%d", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    densiPop1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\nCarta 2\n");

    scanf(" %c", &estado2);
    scanf("%d", &codCarta2);
    scanf("%s", cidade2);
    scanf("%d", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    densiPop2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\nCarta 1:\n");
    printf("Densidade Populacional: %.2f\n", densiPop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f\n", densiPop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}
