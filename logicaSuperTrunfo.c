#include <stdio.h>

int main() {
    // Variáveis da cidade 1
    char estado1[20], codigo1[20], nome1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Variáveis da cidade 2
    char estado2[20], codigo2[20], nome2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro da cidade 1
    printf("CIDADE 1\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da cidade 2
    printf("\nCIDADE 2\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Comparação por População
    printf("\n=== Comparação por População ===\n");
    printf("%s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("%s (%s): %d habitantes\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: %s venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: %s venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Informações extras (densidade e PIB per capita)
    printf("\n=== Informações Extras ===\n");
    printf("%s - Densidade: %.2f hab/km² | PIB per capita: R$ %.2f\n", nome1, densidade1, pibPerCapita1);
    printf("%s - Densidade: %.2f hab/km² | PIB per capita: R$ %.2f\n", nome2, densidade2, pibPerCapita2);

    return 0;
}
