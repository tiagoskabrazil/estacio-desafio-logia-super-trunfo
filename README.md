# Super Trunfo - Comparação Avançada de Cartas (Nível Mestre)

Este é um programa em C que implementa um jogo de Super Trunfo entre duas cartas de países. O jogador pode escolher **dois atributos diferentes** para comparar as cartas e determinar o vencedor. O programa inclui regras especiais para a densidade demográfica e trata empates de forma clara.

## Requisitos

* Sistema com compilador C (GCC ou similar)
* Terminal ou console para executar o programa

## Arquivo

* `main.c` - Contém todo o código fonte do jogo.

## Compilação

Para compilar o programa usando GCC, abra o terminal na pasta onde está o arquivo `main.c` e execute:

```bash
gcc main.c -o supertrunfo
```

Isso criará um executável chamado `supertrunfo`.

## Execução

Após compilar, execute o programa com:

```bash
./supertrunfo
```

No Windows, o comando será:

```cmd
supertrunfo.exe
```

## Uso

1. O programa exibirá um menu para o jogador escolher o **primeiro atributo** para a comparação.
2. Após a escolha, um segundo menu será exibido, **excluindo o atributo já escolhido**, para selecionar o segundo atributo.
3. O programa calculará a vitória de cada carta com base nos dois atributos escolhidos, considerando que:

   * Para todos os atributos, vence o **maior valor**.
   * Para Densidade Demográfica, vence o **menor valor**.
4. Será exibido o resultado detalhado, incluindo:

   * Nomes das cartas
   * Valores dos atributos escolhidos
   * Soma das vitórias por atributo
   * Carta vencedora final ou mensagem de empate

## Observações

* Certifique-se de digitar apenas números válidos do menu (1 a 5).
* O programa trata automaticamente escolhas inválidas ou duplicadas.
* É possível modificar as cartas alterando os valores no arquivo `main.c`.

## Exemplo de Saída

```
Escolha um atributo:
1 - Populacao
2 - Area
3 - PIB
4 - Numero de pontos turistico
5 - Densidade demografica
Opcao: 1

Escolha o segundo atributo:
1 - Populacao
2 - Area
3 - PIB
4 - Numero de pontos turistico
5 - Densidade demografica
Opcao: 2

Comparacao de cartas:
Carta 1 - Brasil
Carta 2 - Argentina

Atributo 1: Populacao
Carta 1: 213000000.00
Carta 2: 45100000.00

Atributo 2: Area
Carta 1: 8515767.00
Carta 2: 2780400.00

Soma de vitorias por atributo:
Carta 1: 2
Carta 2: 0

Resultado final: Carta 1 (Brasil) venceu!
```

---

Este README fornece todas as instruções necessárias para compilar e executar o programa `main.c` do Super Trunfo nível mestre.
