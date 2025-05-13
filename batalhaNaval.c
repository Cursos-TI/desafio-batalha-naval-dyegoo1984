#include <stdio.h>
#define L 10
#define C 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

//Funções para inserir navios
void Fragata(int x, int y, int campo[L][C]){
    //Fragata percorre o campo de batalha no sentido Norte/Sul
    for(int i = x; i < (x+3); i++){
        campo[i][y] = 1;
    }
}

void Crusador(int x, int y, int campo[L][C]){
    //Crusador percorre o campo de batalha no sentido leste/oeste
    for(int i = y; i < (y+3); i++){
        campo[x][i] = 2;
    }
}

void Galeao(int x, int y, int campo[L][C]){
    //Galeão percorre o campo de batalha no sentido Noroeste/Sudeste
    for(int j = y, i = x; j < (y+3), i < (x+3); j++, i++){
        campo[i][j] = 3;
    }
}

void Destroyer(int x, int y, int campo[L][C]){
    //Destroyer percorre o campo de batalha no sentido Nordeste/Sudoeste
    for(int j = y, i = x; j < (y+3), i > (x-3); j++, i--){
        campo[i][j] = 4;
    }
}

//Exibir Campo de Batalha
void CampoDeBatalha(int campo[L][C]){
    printf("X - A B C D E F G H I J ");
    for(int i=0; i<L; i++){
        printf("\n%d - ", i);
        for(int j=0; j<C; j++){
            printf("%d ", campo[i][j]);
        }
    }
}


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
   
    int tabuleiro[L][C];

    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            tabuleiro[i][j]=0;
        }
    }
    
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    //Fragata(2,3,tabuleiro);
    //Crusador(6,4,tabuleiro);

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    //CampoDeBatalha(tabuleiro);
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    Fragata(1,6,tabuleiro);
    Crusador(5,5,tabuleiro);
    Galeao(7,1, tabuleiro);
    Destroyer(2,1, tabuleiro);

    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    CampoDeBatalha(tabuleiro);
    
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
