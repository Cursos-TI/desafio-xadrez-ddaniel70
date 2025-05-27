#include <stdio.h>
    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
         
int main() {

      // usaremos for para a torre 5 casas para a direita
     // usaremos while para bispo. 5 casas a para cima e dereita
    // usaremos do-while para rainha 8 casas para a esquerda
   // usaremos for e while para o cavalo, movimento em L. duas casas para baixo e uma para a esquerda

    // variaveis
    int casasbispo = 1, casasrainha = 1, casastorre, casascavalo;  // variaveis que determinam as casas de cada peça, 
                                                                  //incializei as variáveis com 1 para nao ocorrer possiveis erros,
                                                                // as que nao foram inciadas são de loops for onde inicalizo dentro dele.

        // menu de inicializaçã
    printf("Bem Vindo Ao Jogo Xadrez revulocionário !! \n");

   
        // torre
    printf("\nMovimentos Torre: \n");
    
         //uso do for para os movimentos da torre 5 casas a direita 

    for (casastorre = 1; casastorre <= 5; casastorre++)
    {
        printf("Direita\n");
    }



            // bispo
    printf("\nMovimentos Bispo: \n");
    
            // uso do while para movimentos do bispo 5 casas para cima e direita

    while (casasbispo <= 5)
    {
        printf("Cima, Direita\n");
        casasbispo++ ;             // incrementação da variável
    }


    
            // rainha 
    printf("\nMovimentos Rainha: \n");

            // do while para movimetnoos da rainha 8 casas a esquerda

    do
    {
        printf("Esquerda\n");
        casasrainha++ ;             // incrementar a variável

    } while (casasrainha <= 8);


            // cavalo
            // usaremos dois loops aninhados, um for e um while, onde iremos controlar o movimento em L do cavalo
            // no arquivo do desafio diz duas casas para baixo e uma para a esquerda

    printf("\nMovimentos cavalo: \n");
    
    
    for (casascavalo = 1; casascavalo <= 1; casascavalo++)
    {
        int j = 1;                       //variavel responsavel pela condição do loop while do movimento para baixo do cavalo

        while (j <=2)
        {
            printf("Baixo \n");        // imprime o movimento baixo do cavalo
            j++ ;                   // incrementa a variável j do lopp interno 
        }

        printf("Esquerda \n");     // imprime o movimento esquerda do cavalo
        
    }
    


   
    
    // agradecer por ter jogado
    printf("\nObrigado Por jogar Xadrez Revulocionário !! \n");
    
return 0;

}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


