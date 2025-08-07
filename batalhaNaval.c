#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Nível Mestre

#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10
#define AGUA 0
#define NAVIO 3
#define TAMANHO_NAVIO 3
#define ATK_CRUZ 1
#define ATK_OCTAEDRO 4
#define ATK_CONE 7
#define LINHAS_ATAQUES 3
#define COLUNAS_ATAQUES 5

int main() {
    // Declaração das coordenadas
    char posicionamentoHorizontal[COLUNAS_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int posicionamentoVertical[LINHAS_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Declaração da matriz do tabuleiro
    int tabuleiro[LINHAS_TABULEIRO][COLUNAS_TABULEIRO] = {AGUA};

    // Posicionamento dos navios
    // Navio 1 - vertical
    int inicioLinhaNavio1 = 6;
    int inicioColunaNavio1 = 4;
    int sobreposicaoNavio1 = 0; // Flag para sinalizar se há sobreposição

    // Verificações para posicionar navios
    if((inicioColunaNavio1 >= COLUNAS_TABULEIRO || inicioColunaNavio1 < 0) && (inicioLinhaNavio1 >= LINHAS_TABULEIRO || inicioLinhaNavio1 < 0)){
        printf("ERRO: Navio 1 fora dos limites do tabuleiro!\n");
    }else if((inicioLinhaNavio1 + TAMANHO_NAVIO -1) >= LINHAS_TABULEIRO){
        printf("ERRO: Navio1 ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[inicioLinhaNavio1 + i][inicioColunaNavio1] != AGUA) {
                sobreposicaoNavio1 = 1; // Set 1 para indicar sobreposição
                break;
                }
            }

            if (sobreposicaoNavio1 == 1) {
                printf("ERRO: Navio 1 sobrepõe a outro navio!\n");
            } else {
                // Caso todas as checagens passem posiciona o navio
                for (int i = 0; i < TAMANHO_NAVIO; i++) {
                    tabuleiro[inicioLinhaNavio1 + i][inicioColunaNavio1] = NAVIO;
                }
            }
    }

    // Navio 2 - horizontal
    int inicioLinhaNavio2 = 2;
    int inicioColunaNavio2 = 2;
    int sobreposicaoNavio2 = 0; // Flag para sinalizar se há sobreposição

    // Verificações para posicionar navios
    if((inicioColunaNavio2 >= COLUNAS_TABULEIRO || inicioColunaNavio2 < 0) && (inicioLinhaNavio2 >= LINHAS_TABULEIRO || inicioLinhaNavio2 < 0)){
        printf("ERRO: Navio 2 fora dos limites do tabuleiro!\n");
    }else if((inicioColunaNavio2 + TAMANHO_NAVIO -1) >= COLUNAS_TABULEIRO){
        printf("ERRO: Navio2 ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[inicioLinhaNavio2][inicioColunaNavio2 + i] != AGUA) {
            sobreposicaoNavio2 = 1; // Set 1 para indicar sobreposição
            break;
            }
        }

            if (sobreposicaoNavio2 == 1) {
                printf("ERRO: Navio 2 sobrepõe a outro navio!\n");
            }else {
                // Caso todas as checagens passem posiciona o navio
                for (int i = 0; i < TAMANHO_NAVIO; i++) {
                    tabuleiro[inicioLinhaNavio2][inicioColunaNavio2 + i] = NAVIO;
                }
            }
    }


    // Navio 3 - diagonal
    int inicioLinhaNavio3 = 3;
    int inicioColunaNavio3 = 7;
    int sobreposicaoNavio3 = 0; // Flag para sinalizar se há sobreposição

    // Verificações para posicionar navios
    if((inicioColunaNavio3 >= COLUNAS_TABULEIRO || inicioColunaNavio3 < 0) && (inicioLinhaNavio3 >= LINHAS_TABULEIRO || inicioLinhaNavio3 < 0)){
        printf("ERRO: Navio 3 fora dos limites do tabuleiro!\n");
    }else if(((inicioLinhaNavio3 + TAMANHO_NAVIO -1) >= LINHAS_TABULEIRO) || ((inicioColunaNavio3 + TAMANHO_NAVIO -1) >= COLUNAS_TABULEIRO)){
        printf("ERRO: Navio3 ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int j = 0, k = 0; j < TAMANHO_NAVIO; j++, k++) {
            if (tabuleiro[inicioLinhaNavio3 + j][inicioColunaNavio3 + k] != AGUA) {
            sobreposicaoNavio3 = 1; // Set 1 para indicar sobreposição
            break;
            }
        }

            if (sobreposicaoNavio3 == 1) {
                printf("ERRO: Navio 3 sobrepõe a outro navio!\n");
            }else {
                // Caso todas as checagens passem posiciona o navio
                for (int j = 0, k = 0; j < TAMANHO_NAVIO; j++, k++) {
                    tabuleiro[inicioLinhaNavio3 + j][inicioColunaNavio3 + k] = NAVIO;
                }
            }
    }
    // Navio 4 - diagonal
    int inicioLinhaNavio4 = 9;
    int inicioColunaNavio4 = 0;
    int sobreposicaoNavio4 = 0; // Flag para sinalizar se há sobreposição

    // Verificações para posicionar navios
    if((inicioColunaNavio4 >= COLUNAS_TABULEIRO || inicioColunaNavio4 < 0) && (inicioLinhaNavio4 >= LINHAS_TABULEIRO || inicioLinhaNavio4 < 0)){
        printf("ERRO: Navio 4 fora dos limites do tabuleiro!\n");
    }else if((inicioLinhaNavio4 >= LINHAS_TABULEIRO) || ((inicioColunaNavio4 + TAMANHO_NAVIO -1) >= COLUNAS_TABULEIRO) || (inicioLinhaNavio4 - TAMANHO_NAVIO) < 0){
        printf("ERRO: Navio4 ultrapassa os limites do tabuleiro!\n");
    }else{
        for (int j = 0, k = 0; j < TAMANHO_NAVIO; j++, k++) {
            if (tabuleiro[inicioLinhaNavio4 - j][inicioColunaNavio4 + k] != AGUA) {
            sobreposicaoNavio4 = 1; // Set 1 para indicar sobreposição
            break;
            }
        }

            if (sobreposicaoNavio4 == 1) {
                printf("ERRO: Navio 4 sobrepõe a outro navio!\n");
            }else {
                // Caso todas as checagens passem posiciona o navio
                for (int j = 0, k = 0; j < TAMANHO_NAVIO; j++, k++) {
                    tabuleiro[inicioLinhaNavio4 - j][inicioColunaNavio4 + k] = NAVIO;
                }
            }
    }

    
    // Nível Mestre - Habilidades Especiais com Matrizes
    
    int atk_cone[LINHAS_ATAQUES][COLUNAS_ATAQUES] = {AGUA};
    int centro_cone = COLUNAS_ATAQUES / 2;
    int inicioAtaqueConeLinha = 0;
    int inicioAtaqueConeColuna = 5;
    
    for(int i = 0; i < LINHAS_ATAQUES; i++){
        for(int j = 0; j < COLUNAS_ATAQUES; j++){
            if (j >= centro_cone - i && j <= centro_cone + i) {
                tabuleiro[inicioAtaqueConeLinha + i][inicioAtaqueConeColuna + j] = atk_cone[i][j] = ATK_CONE;
            }
             
        }
    }

    int atk_octaedro[LINHAS_ATAQUES][COLUNAS_ATAQUES] = {AGUA};
    int centro_octaedro = COLUNAS_ATAQUES / 2;
    int inicioAtaqueOctaedroLinha = 4;
    int inicioAtaqueOctaedroColuna = 0;

    for (int i = 0; i < LINHAS_ATAQUES; i++) {
        if (i == 0 || i == 2) {
            tabuleiro[inicioAtaqueOctaedroLinha + i][inicioAtaqueOctaedroColuna + centro_octaedro] = atk_octaedro[i][centro_octaedro] = ATK_OCTAEDRO;
        }
    
        else if (i == 1) {
            for (int j = 0; j < COLUNAS_ATAQUES; j++) {
                if (j >= centro_octaedro - 1 && j <= centro_octaedro + 1) {
                    tabuleiro[inicioAtaqueOctaedroLinha + i][inicioAtaqueOctaedroColuna + j] = atk_octaedro[i][j] = ATK_OCTAEDRO;
                }
            }
        }
    }

    int atk_cruz[LINHAS_ATAQUES][COLUNAS_ATAQUES] = {AGUA};
    int centro_cruz = COLUNAS_ATAQUES / 2;
    int inicioAtaqueCruzLinha = 6;
    int inicioAtaqueCruzColuna = 5;

    for (int i = 0; i < LINHAS_ATAQUES; i++) {
        if (i == 0 || i == 2) {
            tabuleiro[inicioAtaqueCruzLinha + i][inicioAtaqueCruzColuna + centro_cruz] = atk_cruz[i][centro_cruz] = ATK_CRUZ;
        }
    
        else if (i == 1) {
            for (int j = 0; j < COLUNAS_ATAQUES; j++) {
                tabuleiro[inicioAtaqueCruzLinha + i][inicioAtaqueCruzColuna + j] = atk_octaedro[i][j] = ATK_CRUZ;
            }
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

    return 0;
}
