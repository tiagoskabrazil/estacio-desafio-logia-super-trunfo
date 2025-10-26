#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cada carta
typedef struct {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;       // calculada: populacao / area
} Carta;

int main() {
    // Definição de duas cartas com dados pré-definidos
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 1869000.0, 50, 0};
    Carta carta2 = {"Argentina", 45100000, 2780400.0, 492500.0, 30, 0};

    // Cálculo da densidade demográfica
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    int opcao;

    // Menu interativo
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turistico\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparacao de cartas:\n");
    printf("Carta 1 - %s\n", carta1.pais);
    printf("Carta 2 - %s\n\n", carta2.pais);

    switch (opcao) {
        case 1: // Populacao
            printf("Atributo escolhido: Populacao\n");
            printf("Carta 1: %d\n", carta1.populacao);
            printf("Carta 2: %d\n", carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.pais);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Area
            printf("Atributo escolhido: Area\n");
            printf("Carta 1: %.2f\n", carta1.area);
            printf("Carta 2: %.2f\n", carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.pais);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1: %.2f\n", carta1.pib);
            printf("Carta 2: %.2f\n", carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.pais);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Numero de pontos turistico\n");
            printf("Carta 1: %d\n", carta1.pontos_turisticos);
            printf("Carta 2: %d\n", carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.pais);
            } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo escolhido: Densidade demografica\n");
            printf("Carta 1: %.6f\n", carta1.densidade);
            printf("Carta 2: %.6f\n", carta2.densidade);
            if (carta1.densidade < carta2.densidade) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.pais);
            } else if (carta2.densidade < carta1.densidade) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Por favor, escolha um numero de 1 a 5.\n");
    }

    return 0;
}
