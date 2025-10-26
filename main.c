#include <stdio.h>
#include <string.h>

// Estrutura para armazenar dados da carta
typedef struct {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade; // calculada
} Carta;

// Função para exibir menu de atributos
void exibirMenu(int excluido) {
    printf("Escolha um atributo:\n");
    if (excluido != 1) printf("1 - Populacao\n");
    if (excluido != 2) printf("2 - Area\n");
    if (excluido != 3) printf("3 - PIB\n");
    if (excluido != 4) printf("4 - Numero de pontos turistico\n");
    if (excluido != 5) printf("5 - Densidade demografica\n");
    printf("Opcao: ");
}

// Função para obter o valor de um atributo da carta
float valorAtributo(Carta c, int atributo) {
    switch(atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontos_turisticos;
        case 5: return c.densidade;
        default: return 0;
    }
}

// Função para exibir nome do atributo
void nomeAtributo(int atributo) {
    switch(atributo) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Numero de pontos turistico"); break;
        case 5: printf("Densidade demografica"); break;
    }
}

int main() {
    // Cartas pré-definidas
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 1869000.0, 50, 0};
    Carta carta2 = {"Argentina", 45100000, 2780400.0, 492500.0, 30, 0};

    // Calcula densidade demográfica
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    int atributo1, atributo2;

    // Escolha do primeiro atributo
    exibirMenu(0);
    scanf("%d", &atributo1);
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opcao invalida!\n");
        return 1;
    }

    // Escolha do segundo atributo (não pode repetir)
    exibirMenu(atributo1);
    scanf("%d", &atributo2);
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opcao invalida!\n");
        return 1;
    }

    // Valores dos atributos
    float val1_carta1 = valorAtributo(carta1, atributo1);
    float val1_carta2 = valorAtributo(carta2, atributo1);

    float val2_carta1 = valorAtributo(carta1, atributo2);
    float val2_carta2 = valorAtributo(carta2, atributo2);

    // Comparação individual e soma dos pontos
    float soma_carta1 = 0, soma_carta2 = 0;

    // Regra: densidade demográfica, menor vence
    if (atributo1 == 5) {
        soma_carta1 += (val1_carta1 < val1_carta2) ? 1 : 0;
        soma_carta2 += (val1_carta2 < val1_carta1) ? 1 : 0;
    } else {
        soma_carta1 += (val1_carta1 > val1_carta2) ? 1 : 0;
        soma_carta2 += (val1_carta2 > val1_carta1) ? 1 : 0;
    }

    if (atributo2 == 5) {
        soma_carta1 += (val2_carta1 < val2_carta2) ? 1 : 0;
        soma_carta2 += (val2_carta2 < val2_carta1) ? 1 : 0;
    } else {
        soma_carta1 += (val2_carta1 > val2_carta2) ? 1 : 0;
        soma_carta2 += (val2_carta2 > val2_carta1) ? 1 : 0;
    }

    // Exibição detalhada do resultado
    printf("\nComparacao de cartas:\n");
    printf("Carta 1 - %s\n", carta1.pais);
    printf("Carta 2 - %s\n\n", carta2.pais);

    printf("Atributo 1: ");
    nomeAtributo(atributo1);
    printf("\nCarta 1: %.2f\nCarta 2: %.2f\n\n", val1_carta1, val1_carta2);

    printf("Atributo 2: ");
    nomeAtributo(atributo2);
    printf("\nCarta 1: %.2f\nCarta 2: %.2f\n\n", val2_carta1, val2_carta2);

    printf("Soma de vitorias por atributo:\n");
    printf("Carta 1: %.0f\n", soma_carta1);
    printf("Carta 2: %.0f\n\n", soma_carta2);

    // Determina vencedor final
    if (soma_carta1 > soma_carta2) {
        printf("Resultado final: Carta 1 (%s) venceu!\n", carta1.pais);
    } else if (soma_carta2 > soma_carta1) {
        printf("Resultado final: Carta 2 (%s) venceu!\n", carta2.pais);
    } else {
        printf("Resultado final: Empate!\n");
    }

    return 0;
}
