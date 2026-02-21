#include <stdio.h>
#include <string.h>

int main() {

    // ===============================
    // DECLARAÇÃO DAS CARTAS
    // ===============================

    // Carta 1
    char estado1[30] = "SP";
    char codigo1[10] = "C1";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000.0; // em milhões
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2[30] = "RJ";
    char codigo2[10] = "C2";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300000.0; // em milhões
    int pontosTuristicos2 = 30;

    // ===============================
    // CÁLCULOS
    // ===============================

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // ===============================
    // ESCOLHA DO ATRIBUTO (FIXO NO CÓDIGO)
    // ===============================

    int atributo = 1;

    /*
    1 - População
    2 - Área
    3 - PIB
    4 - Densidade Populacional
    5 - PIB per capita
    */

    printf("Comparação de Cartas do Super Trunfo\n\n");

    // ===============================
    // COMPARAÇÃO UTILIZANDO IF / ELSE
    // ===============================

    if (atributo == 1) {
        printf("Atributo escolhido: População\n\n");
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    else if (atributo == 2) {
        printf("Atributo escolhido: Área\n\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);

        if (area1 > area2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    else if (atributo == 3) {
        printf("Atributo escolhido: PIB\n\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    else if (atributo == 4) {
        printf("Atributo escolhido: Densidade Populacional\n\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);

        // IMPORTANTE: menor densidade vence
        if (densidade1 < densidade2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    else if (atributo == 5) {
        printf("Atributo escolhido: PIB per capita\n\n");
        printf("Carta 1 - %s: %.6f\n", cidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.6f\n", cidade2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    }

    return 0;
}
