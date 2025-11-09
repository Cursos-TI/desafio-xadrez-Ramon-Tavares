#include <stdio.h>

// movimento do bispo
void movimentoBispo(int bispo){
    if (bispo > 0){
        printf("Cima, Direita\n");
        movimentoBispo(bispo - 1);
    }  
}


// movimento da torre
void movimentoTorre(int torre){
    if (torre > 0){
        printf("Direita\n");
        movimentoTorre(torre - 1);
    }
    
}


// movimento da rainha
void movimentoRainha( int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        movimentoRainha(rainha - 1);
    }
    
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5;
    int torre = 5;
    int rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //movimento do bispo 
    printf("  *Bispo*\n");
    movimentoBispo(bispo);
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // movimento da torre
    printf("\n*Torre*\n");
    movimentoTorre(torre);


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // movimento da rainha
     printf("\n*Rainha*\n");
    movimentoRainha(rainha);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int cavalo = 1;

    printf("\n*Cavalo*\n");

    while (cavalo--){
        for (int i = 1; i <= 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}