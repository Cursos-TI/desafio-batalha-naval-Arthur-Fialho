#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Nível Aventureiro

#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10

int main() {
    // Declaração das coordenadas
    char posicionamentoHorizontal[COLUNAS_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int posicionamentoVertical[LINHAS_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Declaração da matriz do tabuleiro
    int tabuleiro[LINHAS_TABULEIRO][COLUNAS_TABULEIRO] = {0};

    // Posicionamento dos navios
    // Navio 1 - vertical
    int inicioLinhaNavio1 = 2;
    int inicioColunaNavio1 = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[inicioLinhaNavio1 + i][inicioColunaNavio1] = 3;
    }

    // Navio 2 - horizontal
    int inicioLinhaNavio2 = 6;
    int inicioColunaNavio2 = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[inicioLinhaNavio2][inicioColunaNavio2 + i] = 3;
    }

    // Navio 3 - diagonal
    int inicioLinhaNavio3 = 1;
    int inicioColunaNavio3 = 5;
    for (int j = 0, k = 0; j < 3; j++, k++) {
        tabuleiro[inicioLinhaNavio3 + j][inicioColunaNavio3 + k] = 3;
    }
    // Navio 4 - diagonal
    int inicioLinhaNavio4 = 9;
    int inicioColunaNavio4 = 0;
    for (int j = 0, k = 0; j < 3; j++, k++) {
        tabuleiro[inicioLinhaNavio4 - j][inicioColunaNavio4 + k] = 3;
    }

    // Exibição do tabuleiro
    printf("TABULEIRO DE BATALHA NÁVAL\n");
    printf("\n"); // Pula mais uma linha

    for(int i = 0; i < 10; i++){
        if(i == 0){
        printf("    %c ", posicionamentoHorizontal[i]); // Alinhamento das letras com o tabuleiro na letra A
        }else{
            printf(" %c ", posicionamentoHorizontal[i]); // Alinhamento das demais letras
        }
    }

    for(int i = 0; i < 10; i++){
        printf("\n");
        if(i == 9){
        printf("%d ", posicionamentoVertical[i]); // Aqui na exibição do 10 é excluido o espaço antes do numero na exibição
        }else{
            printf(" %d ", posicionamentoVertical[i]); // Alinhamento dos numeros das posições no tabulero, por causa do 10 ficaria distorcido a tabela
        }
        for(int j = 0; j < 10; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    printf("\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
