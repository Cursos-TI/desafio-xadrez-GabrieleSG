#include<stdio.h>

//Função de movimento - TORRE
void moverTorre( int casas ) 
{
    if ( casas > 0 ) 
    {
        printf("Movimento: direita.\n");
        moverTorre(casas - 1);
    }
}

//Função de movimento - BISPO
void moverBispo( int casas ) 
{
    for ( int i = 0; i < casas; i++ ) 
    {
        printf("Movimento: cima.\n");

        for ( int k = 0; k < 1; k++ ) 
        {
            printf("Movimento: direita.\n");
        }
    }
}

//Função de movimento - RAINHA
void moverRainha( int casas ) 
{
    if ( casas > 0 ) 
    {
        printf("Movimento: esquerda.\n");
        moverRainha(casas - 1);
    }
}

//Função de movimento - CAVALO
void moverCavalo( int casas ) 
{
    for (int i = 0; i < casas; i++) 
    {
        
        for (int v = 0; v < 2; v++) 
        {
            printf("Movimento: baixo.\n");
        }

        for (int h = 0; h < 1; h++) 
        {
            printf("Movimento: esquerda.\n");
        }
    }
}

int main()
{
        //JOGO DE XADREZ

        //Variáveis
    //Torre - Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
    int torre = 5; //Movimentos
    
    //Bispo - Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
    int bispo = 5; //Movimentos
    
    //Rainha - Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    int rainha = 8; //Movimentos

    //Cavalo - O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    int cavalo = 1; //Movimentos

    int opcaoMenu = 1; //Variável vazia inicializada

    do
    {
            //Menu da interação principal do jogo
        printf("\tMenu de interações do jogo - Xadrez:\n");
        printf("1 - Explicar o uso da Torre.\n");
        printf("2 - Explicar o uso do Bispo.\n");
        printf("3 - Explicar o uso da Rainha.\n");
        printf("4 - Explicar o uso do Cavalo.\n");
        printf("5 - Movimentar uma peça.\n");
        printf("6 - Sair.\n");

        printf("Digite o número correspondente a opção:\n");
        scanf(" %d", &opcaoMenu);

        switch ( opcaoMenu )
        {
        case 1:
            printf("\tMovimentos da peça TORRE aceitos pelo xadrez.\n");
            printf("Move-se em linha reta horizontalmente ou verticalmente.\n");

            break;
        case 2:
            printf("\tMovimentos da peça BISPO aceitos pelo xadrez.\n");
            printf("Move-se na diagonal.\n");

            break;
        case 3:
            printf("\tMovimentos da peça RAINHA aceitos pelo xadrez.\n");
            printf("Move-se em todas as direções.\n");

            break;
        case 4:
            printf("\tMovimentos da peça CAVALO aceitos pelo xadrez.\n");
            printf("O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente.\n");

            break;
        case 5:

            //Menu para movimentar as peças do jogo
            printf("\tMenu de peças do Xadrez:\n");

            int peca = 1; //Variável vazia inicializada

            //Peças do Xadrez
            printf("1 - Torre.\n");
            printf("2 - Bispo.\n");
            printf("3 - Rainha.\n");
            printf("4 - Cavalo.\n");

            scanf(" %d", &peca);

            switch ( peca )
            {
            case 1:
                printf("Movimento realizado por: Torre.\n");

                moverTorre( torre );

                break;
            case 2:
                printf("Movimento realizado por: Bispo.\n");

                moverBispo( bispo );

                break;
            case 3:
                printf("Movimento realizado por: Rainha.\n");

                moverRainha( rainha );

                break;

            case 4:
                printf("Movimento realizado por: Cavalo.\n");

                moverCavalo( cavalo );

                break;

            default:
                printf("Peça inválida!\n");
                break;
            }

            break;
        case 6:
            printf("Saindo do jogo ...\n");

            break;  
        default:
            printf("Opcao invalida\n");

            break;
        }
    } while ( opcaoMenu != 6 );
    
    return 0;
}
