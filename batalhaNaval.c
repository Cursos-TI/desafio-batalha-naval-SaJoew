#include <stdio.h>

int main() {

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    tabuleiro[2][2] = 3;  
    tabuleiro[3][3] = 3;  
    tabuleiro[4][4] = 3;  
    
    int linhaOrigemCone = 5, colunaOrigemCone = 5;
    
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            int x = linhaOrigemCone + i;
            int y = colunaOrigemCone + j;
            if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO) {
                tabuleiro[x][y] = 5;  
            }
        }
    }

    int linhaOrigemCruz = 4, colunaOrigemCruz = 4;

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        tabuleiro[linhaOrigemCruz][i] = 5; 
        tabuleiro[i][colunaOrigemCruz] = 5; 
    }

    int linhaOrigemOctaedro = 3, colunaOrigemOctaedro = 3;
        for (int j = -2; j <= 2; j++) {
            if (abs(i) + abs(j) <= 2) {
                int x = linhaOrigemOctaedro + i;
                int y = colunaOrigemOctaedro + j;
                if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO) {
                    tabuleiro[x][y] = 5;  
                }
            }
        }
    }
    printf("Tabuleiro com Habilidades:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0)
                printf("0 "); 
            else if (tabuleiro[i][j] == 3)
                printf("3 ");  
            else if (tabuleiro[i][j] == 5)
                printf("5 ");  
        }
        printf("\n");
    }

    return 0;
}
