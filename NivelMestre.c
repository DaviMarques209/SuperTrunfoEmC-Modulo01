#include <stdio.h>

int main() {

    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densiPop1, densiPop2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    densiPop1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densiPop2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densiPop1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densiPop2);

    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Densidade Populacional: %d\n", densiPop1 < densiPop2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
