#include <stdio.h>
#include <string.h>

int main() {

    // CARTA 1
    char pais1[] = "Brasil";
    float populacao1 = 214.3;
    float area1 = 8510.0;
    float pib1 = 2130.0;
    float densidade1 = 25.2;

    // CARTA 2
    char pais2[] = "Argentina";
    float populacao2 = 46.2;
    float area2 = 2780.0;
    float pib2 = 640.0;
    float densidade2 = 16.6;

    int atributo1, atributo2;

    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;

    char nomeAtributo1[50];
    char nomeAtributo2[50];

    printf("=================================\n");
    printf("      SUPER TRUNFO FINAL\n");
    printf("=================================\n");

    printf("\nCartas:\n");
    printf("1 - %s\n", pais1);
    printf("2 - %s\n", pais2);

    // PRIMEIRO ATRIBUTO
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demografica\n");

    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            strcpy(nomeAtributo1, "Populacao");
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            strcpy(nomeAtributo1, "Area");
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            strcpy(nomeAtributo1, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // SEGUNDO ATRIBUTO DINÂMICO
    printf("\nEscolha o SEGUNDO atributo:\n");

    switch (atributo1) {
        case 1:
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Densidade Demografica\n");
            break;

        case 2:
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Densidade Demografica\n");
            break;

        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Densidade Demografica\n");
            break;

        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            break;
    }

    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Nao e permitido escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (atributo2) {
        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            strcpy(nomeAtributo2, "Populacao");
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            strcpy(nomeAtributo2, "Area");
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            strcpy(nomeAtributo2, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("\n=================================\n");
    printf(" COMPARACAO INDIVIDUAL\n");
    printf("=================================\n");

    // ATRIBUTO 1
    printf("\n%s\n", nomeAtributo1);
    printf("%s: %.2f\n", pais1, valor1Carta1);
    printf("%s: %.2f\n", pais2, valor1Carta2);

    if (atributo1 == 4) {
        if (valor1Carta1 < valor1Carta2)
            printf("Vencedor: %s\n", pais1);
        else if (valor1Carta2 < valor1Carta1)
            printf("Vencedor: %s\n", pais2);
        else
            printf("Empate!\n");
    } else {
        if (valor1Carta1 > valor1Carta2)
            printf("Vencedor: %s\n", pais1);
        else if (valor1Carta2 > valor1Carta1)
            printf("Vencedor: %s\n", pais2);
        else
            printf("Empate!\n");
    }

    // ATRIBUTO 2
    printf("\n%s\n", nomeAtributo2);
    printf("%s: %.2f\n", pais1, valor2Carta1);
    printf("%s: %.2f\n", pais2, valor2Carta2);

    if (atributo2 == 4) {
        if (valor2Carta1 < valor2Carta2)
            printf("Vencedor: %s\n", pais1);
        else if (valor2Carta2 < valor2Carta1)
            printf("Vencedor: %s\n", pais2);
        else
            printf("Empate!\n");
    } else {
        if (valor2Carta1 > valor2Carta2)
            printf("Vencedor: %s\n", pais1);
        else if (valor2Carta2 > valor2Carta1)
            printf("Vencedor: %s\n", pais2);
        else
            printf("Empate!\n");
    }

    // SOMA DOS ATRIBUTOS
float somaCarta1 = valor1Carta1 + valor2Carta1;
float somaCarta2 = valor1Carta2 + valor2Carta2;

// margem para comparação de float
float tolerancia = 0.0001;

char *vencedor =
    (somaCarta1 > somaCarta2) ? pais1 :
    (somaCarta2 > somaCarta1) ? pais2 :
    "Empate";

    printf("\n=================================\n");
    printf(" RESULTADO FINAL\n");
    printf("=================================\n");

    if ((somaCarta1 - somaCarta2 < tolerancia) &&
    (somaCarta2 - somaCarta1 < tolerancia))
{
    printf("EMPATE!\n");
}
else
{
    printf("VENCEDOR DA RODADA: %s\n", vencedor);
}

    return 0;
}