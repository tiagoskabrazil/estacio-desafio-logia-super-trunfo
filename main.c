#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cada carta
typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;   // calculada: populacao / area
    float pib_per_capita; // calculado: pib / populacao
} Carta;

int main() {
    // Definição de duas cartas com dados pré-definidos
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 800000.0, 15, 0, 0};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1182.3, 400000.0, 10, 0, 0};

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Escolha do atributo para comparação
    // Opções: populacao, area, pib, densidade, pib_per_capita
    // Aqui vamos escolher "populacao" como exemplo
    char atributo[20] = "populacao";

    printf("Comparacao de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%s):\n", carta1.nome, carta1.estado);
    printf("Populacao: %d\n\n", carta1.populacao);

    printf("Carta 2 - %s (%s):\n", carta2.nome, carta2.estado);
    printf("Populacao: %d\n\n", carta2.populacao);

    // Comparação baseada no atributo escolhido
    if (strcmp(atributo, "populacao") == 0) {
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo, "area") == 0) {
        if (carta1.area > carta2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.area > carta1.area) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo, "pib") == 0) {
        if (carta1.pib > carta2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.pib > carta1.pib) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo, "densidade") == 0) {
        // Para densidade populacional, menor valor vence
        if (carta1.densidade < carta2.densidade) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.densidade < carta1.densidade) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo, "pib_per_capita") == 0) {
        if (carta1.pib_per_capita > carta2.pib_per_capita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else {
        printf("Atributo invalido para comparacao!\n");
    }

    return 0;
}
