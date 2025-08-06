#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Nível Aventureiro

#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10
#define AGUA 0
#define NAVIO 3
#define TAMANHO_NAVIO 3

int main() {
    // Declaração das coordenadas
    char posicionamentoHorizontal[COLUNAS_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int posicionamentoVertical[LINHAS_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Declaração da matriz do tabuleiro
    int tabuleiro[LINHAS_TABULEIRO][COLUNAS_TABULEIRO] = {AGUA};

    // Posicionamento dos navios
    // Navio 1 - vertical
    int inicioLinhaNavio1 = 2;
    int inicioColunaNavio1 = 3;
    if(inicioColunaNavio1 >= COLUNAS_TABULEIRO || inicioColunaNavio1 < 0 && inicioLinhaNavio1 >= LINHAS_TABULEIRO || inicioLinhaNavio1 < 0){
        printf("ERRO: Fora dos limites do tabuleiro!\n");
    }else if((inicioLinhaNavio1 + TAMANHO_NAVIO -1) >= LINHAS_TABULEIRO){
        printf("ERRO: Navio ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[inicioLinhaNavio1 + i][inicioColunaNavio1] = NAVIO;
        }
    }

    // Navio 2 - horizontal
    int inicioLinhaNavio2 = 6;
    int inicioColunaNavio2 = 4;
    if(inicioColunaNavio2 >= COLUNAS_TABULEIRO || inicioColunaNavio2 < 0 && inicioLinhaNavio2 >= LINHAS_TABULEIRO || inicioLinhaNavio2 < 0){
        printf("ERRO: Fora dos limites do tabuleiro!\n");
    }else if((inicioColunaNavio2 + TAMANHO_NAVIO -1) >= LINHAS_TABULEIRO){
        printf("ERRO: Navio ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[inicioLinhaNavio2][inicioColunaNavio2 + i] = NAVIO;
        }
    }

    // Navio 3 - diagonal
    int inicioLinhaNavio3 = 3;
    int inicioColunaNavio3 = 7;
    if(inicioColunaNavio3 >= COLUNAS_TABULEIRO || inicioColunaNavio3 < 0 && inicioLinhaNavio3 >= LINHAS_TABULEIRO || inicioLinhaNavio3 < 0){
        printf("ERRO: Fora dos limites do tabuleiro!\n");
    }else if((inicioLinhaNavio3 + TAMANHO_NAVIO -1) >= LINHAS_TABULEIRO || (inicioColunaNavio3 + TAMANHO_NAVIO -1) >= COLUNAS_TABULEIRO){
        printf("ERRO: Navio ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int j = 0, k = 0; j < TAMANHO_NAVIO; j++, k++) {
            tabuleiro[inicioLinhaNavio3 + j][inicioColunaNavio3 + k] = NAVIO;
        }
    }
    // Navio 4 - diagonal
    int inicioLinhaNavio4 = 2;
    int inicioColunaNavio4 = 0;
    if(inicioColunaNavio4 >= COLUNAS_TABULEIRO || inicioColunaNavio4 < 0 && inicioLinhaNavio4 >= LINHAS_TABULEIRO || inicioLinhaNavio4 < 0){
        printf("ERRO: Fora dos limites do tabuleiro!\n");
    }else if((inicioLinhaNavio4 + TAMANHO_NAVIO -1) >= LINHAS_TABULEIRO || (inicioColunaNavio4 + TAMANHO_NAVIO -1) >= COLUNAS_TABULEIRO){
        printf("ERRO: Navio ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int j = 0, k = 0; j < TAMANHO_NAVIO; j++, k++) {
            tabuleiro[inicioLinhaNavio4 - j][inicioColunaNavio4 + k] = NAVIO;
        }
    }

    // Exibição do tabuleiro
    printf("TABULEIRO DE BATALHA NÁVAL\n");
    printf("\n"); // Pula mais uma linha

    for(int i = 0; i < COLUNAS_TABULEIRO; i++){
        if(i == 0){
        printf("    %c ", posicionamentoHorizontal[i]); // Alinhamento das letras com o tabuleiro na letra A
        }else{
            printf(" %c ", posicionamentoHorizontal[i]); // Alinhamento das demais letras
        }
    }

    for(int i = 0; i < LINHAS_TABULEIRO; i++){
        printf("\n");
        if(i == 9){
        printf("%d ", posicionamentoVertical[i]); // Aqui na exibição do 10 é excluido o espaço antes do numero na exibição
        }else{
            printf(" %d ", posicionamentoVertical[i]); // Alinhamento dos numeros das posições no tabulero, por causa do 10 ficaria distorcido a tabela
        }
        for(int j = 0; j < LINHAS_TABULEIRO; j++){
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
