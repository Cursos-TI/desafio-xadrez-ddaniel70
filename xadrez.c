#include <stdio.h>
    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    
 
      // Função recursiva para torre 

void movimento_torre(int casas)                      // usamos a função void pois ela nao retorna nenhum valor após a operação
{                 

    if (casas > 0)                                // caso base
    {
        printf("Direita \n");                   // imprime a direção em que a torre se movimenta, 5 casas para a direita
        movimento_torre(casas - 1);            // chama a função novamente, reduzindo em um o seu valor
    }
}

      // função recursiva com loops aninhados for para o bispo
      
void movimentos_bispo(int casas)                              // funçao void nao retorna valor aṕos execução
{                             
    if (casas > 0)                                          // caso base
    {
        for (int i = 1; i <= 1 ; i++)                     // for externo controla o movimento vertical como pedido
        {   
            printf("\nDiagonal\n");                     // imprime que o movimento e na diagonl
            printf("Cima \n");                         // imprime que o movimento sera na vertical

            for (int j = 1; j >= 1; j--)              // for interno controla o movimento horizontal 
                {
                    printf("Direita \n");           // imptime o movimento na horizontal
                    movimentos_bispo(casas - 1);   // chama a função novamente, reuduzindo em um o seu valor
                }
        }
    }   
}

      // função recursiva para a rainha 

void movimento_rainha(int casas)              // usamos a função void pois ela nao retorna nenhum valor aṕos a operação.
{              
    if (casas > 0)                           // caso base
    {
        printf("Esquerda \n");             // imprime a direção que a rainha se movimenta, 8 casas para a esquerda
        movimento_rainha(casas - 1);      // chama a função novamente, reduzindo em um o seu valor
    } 
}
 
int main() {

    // menu de inicialização

    printf("Bem Vindo Ao Jogo Xadrez revulocionário !! \n");

    // movimentos da torre

    printf("\nMovimentos da Torre: \n");          // imprime qual peça esta movimentando
    movimento_torre (5);                         //  chama a funçao recursiva da torre com o valor 5, representando 5 casas
     
    // movimentos do bispo

    printf("\nMovimentos do Bispo (DIAGONAL): \n");          // imprime qual peça esta movimentando
    movimentos_bispo (5);                        // chama a função recursiva so bispo com o valor 5, representando 5 casas

    // movimentos da rainha

    printf("\nMovimentos da Rainha: \n");        // imprime a peça que esta movimentando 
    movimento_rainha (8);                       // chama a função recursiva da rainha com o valor 8, representando 8 casa/s
     
    // movimentos do cavalo

    printf("\nMovimentos Do Cavalo: \n");

         // usei loop complexo de múltiplas variáveis, declarei e inicei no mesmo loop

    for (int casas_horizontal = 1, casas_vertical = 1; casas_horizontal <= 1; casas_horizontal++)  //loop externo responsavel pelo movimento horizontal do cavalo                                                                            
    {
        while (casas_vertical <= 2 && casas_horizontal <=1)     // loop interno resposável pelo movimento vertical do cavalo
        {
            printf("Cima \n");        // imprime o movimento cima do cavalo
            casas_vertical++ ;       // incrementa a variável do lopp interno
            continue;               // pula para a proxima iteração 
        }

        printf("Direita \n");     // imprime o movimento direita do cavalo
        break;                   // sai do loop, encerrando ele
    }

    // agradecer por ter jogado o jogo
    printf("\nObrigado Por Jogar Xadrez Revulocionário !! \n");
    
    return 0;
}