#include <stdio.h>
    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
         
int main() {

    // usaremos funções for para a torre 5 casas para a direita
    // usaremos funções while para bispo. 5 casas a para cima e dereira
    // usaremos funções do-while para rainha 8 casas para a esquerda

    // variaveis
    int casasbispo = 1, casasrainha = 1, casastorre;  // variaveis que determinam as casas de cada peça, incializei as variáveis com 1 para nao ocorrer possiveis erros

    // menu de inicializaçã
    printf("Bem Vindo Ao Jogo Xadrez revulocionário !! \n");

   
    // torre
    printf("\nMovimentos Torre: \n");
    
    //uso do for para os movimentos da torre 5 casas a direita 

    for (casastorre = 1; casastorre <= 5; casastorre++)
    {
        printf("Torre: Direita\n");
    }



    // bispo
    printf("\nMovimentos Bispo: \n");
    
    // uso do while para movimentos do bispo 5 casas para cima e direita

    while (casasbispo <= 5)
    {
        printf("Bispo: Cima, Direita\n");
        casasbispo++ ;             // incrementação da variável
    }


    
    // rainha 
    printf("\nMovimentos Rainha: \n");

    // do while para movimetnoos da rainha 8 casas a esquerda

    do
    {
        printf("Rainha: Esquerda\n");
        casasrainha++ ; // incrementar a variável

    } while (casasrainha <= 8);
   
    
    // agradecer por ter jogado
    printf("\nObrigado Por jogar Xadrez Revulocionário !! \n");
    
return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


