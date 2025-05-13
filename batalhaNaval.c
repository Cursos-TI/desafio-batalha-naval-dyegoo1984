#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

//Funções para inserir navios
void Fragata(int x, int y, int campo[10][10]){
    //Fragata percorre o campo de batalha no sentido leste/oeste
    for(int i = x; i < (x+3); i++){
        campo[x][i] = 2;
    }
}

void Crusador(int x, int y, int campo[10][10]){
    //Crusador percorre o campo de batalha no sentido Norte/Sul
    for(int i = x; i < (x+3); i++){
        campo[i][y] = 2;
    }
}

//Exibir Campo de Batalha
void CampoDeBatalha(int campo[10][10]){
    printf("X - A B C D E F G H I J ");
    for(int i=0; i<10; i++){
        printf("\n%d - ", i);
        for(int j=0; j<10; j++){
            printf("%d ", campo[i][j]);
        }
    }
}


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
   
    int tabuleiro[10][10];

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            tabuleiro[i][j]=0;
        }
    }
    
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    Fragata(2,3,tabuleiro);
    Crusador(6,4,tabuleiro);

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    CampoDeBatalha(tabuleiro);
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
