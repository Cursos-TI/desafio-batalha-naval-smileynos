#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3
#define MAR 0

int main() {
    // Declaração de variáveis
    int linha[LINHAS];
    char coluna[COLUNAS];
    int tabuleiro[LINHAS][COLUNAS];
    int navioHorizontal[NAVIO];
    int navioVertical[NAVIO];
    int navioDiagonalPri[NAVIO];
    int navioDiagonalSec[NAVIO];
    int habcone [NAVIO];
    int habcruz [NAVIO];
    int haboctaedro [NAVIO];

    //  tabuleiro com o valor 0
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = MAR;
        }
    }

    for (int i = 0; i < COLUNAS; i++){

        coluna[i] = 'A' + i;
    }

  
    for (int i =0; i < LINHAS; i++){
        linha[i] = i+1;
    }
    // Posiçã do navio na horizontal
    int coordenadHorzintal = 2;
    int coordenadaVertical = 3;
    for (int i = 0; i < 2; i++){
        navioHorizontal[i] = NAVIO;
        tabuleiro[coordenadHorzintal ][coordenadaVertical] = navioHorizontal [i];
        coordenadaVertical++;
    } 
    // Posição do Navio na Vertical
  
    int coordenadaHorizontal2 = 5;
    int coordenadaVertical2 = 7;
    for (int j = 0; j < NAVIO; j++){
        navioVertical [j] = NAVIO;
        tabuleiro [coordenadaHorizontal2] [coordenadaVertical2] = navioVertical [j];
        coordenadaHorizontal2++;
    }
    // Posição do Navio na DiagonalPrincipal
    int Diagonalprincipal = 1;
    for (int i = 0; i < NAVIO; i++){
        navioDiagonalPri[i] = NAVIO;
        for (int j = 0; j < NAVIO; j++){
            tabuleiro[Diagonalprincipal][Diagonalprincipal] = navioDiagonalPri[i];
            
        }
        Diagonalprincipal ++;
    } 

    // Navio DiagonalSecundaria
    int diagonalSecundaria = 0; // Começa na linha 0
    for (int i = 0; i < NAVIO; i++) {
        navioDiagonalSec[i] = NAVIO;
        tabuleiro[diagonalSecundaria][9 - diagonalSecundaria] = navioDiagonalSec[i]; 
        diagonalSecundaria++;
    }
    // Habilidade Cone
    int coordenadHabconeH= 3; //posição na horizontal
    int coordenadaHabconeV = 3; //posição na na Vertical
    for (int i = 0; i < 5; i++){
        navioHorizontal[i] = NAVIO;
        tabuleiro[coordenadHabconeH ][coordenadaHabconeV - 2] = navioHorizontal [i];
        coordenadaHabconeV++;
    } 
    int coordenadaHabconeH2 = 1; //posição na horizontal
    int coordenadaHabconeV2 = 3; //posição na Vertical
    for (int j = 0; j < 2; j++){
    habcone [j] = NAVIO;
    tabuleiro [coordenadaHabconeH2 ] [coordenadaHabconeV2] = habcone [j];
    coordenadaHabconeH2++;
    }

    // Habilidade em Cruz
    int habcruzhorizontal = 5; //posição na horizontal
    int habcruzvertical = 6; //posição na Vertical
    for (int i = 0; i < 5; i++){
        navioHorizontal[i] = NAVIO;
        tabuleiro[habcruzhorizontal + 1][habcruzvertical - 1] = navioHorizontal [i];
        habcruzvertical++;
    } 
    // Habilidade em octoedro
    int coordenadHaboctoedroH1 = 5; //posição na horizontal
    int coordenadaHabctoedroV1 = 6; //posição na Vertical
    for (int i = 0; i <NAVIO; i++){
        navioHorizontal[i] = NAVIO;
        tabuleiro[coordenadHaboctoedroH1 + 1][coordenadaHabctoedroV1- 5] = navioHorizontal [i];
        coordenadaHabctoedroV1++;
    } 

    int coordenadaHaboctoedroH2 = 5;
    int coordenadaHaboctoedroV2 = 7;
    for(int i = 0; i <2; i++){
        haboctaedro [i] = NAVIO;
        tabuleiro [coordenadaHaboctoedroH2 + 1] [coordenadaHaboctoedroV2 - 5] = haboctaedro [i];
        coordenadaHaboctoedroH2--;
        for (int j = 0; j < 2; j++){
        habcone [j] = NAVIO;
        tabuleiro [coordenadaHaboctoedroH2 + 1] [coordenadaHaboctoedroV2 - 5] = haboctaedro [j];
        coordenadaHaboctoedroH2++;
        }
    }
       
    // Exibe o nome do jogo
    printf("TABULEIRO BATALHA-NAVAL\n");
    printf("   ");
 
    // Imprime na tela as colunas representada pelas letras de A á J 
    for (int i = 0; i < COLUNAS; i++) {
    printf("%c ", coluna[i]);
    }
    printf("\n");
 
    // Exibe a posição dos navios no tabuleiro
    for (int i = 0; i < LINHAS; i++) {
    printf("%2d", linha[i]);
    for (int j = 0; j < COLUNAS; j++) {
        printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}