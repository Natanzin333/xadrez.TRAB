#include <stdio.h>

// Função para mover a Torre
void moverTorre(int direcao, int passosRestantes) {
    if (passosRestantes == 0) {
        return;
    }

    switch (direcao) {
        case 1:
            printf("Torre se moveu para CIMA!\n");
            break;
        case 2:
            printf("Torre se moveu para BAIXO!\n");
            break;
        case 3:
            printf("Torre se moveu para ESQUERDA!\n");
            break;
        case 4:
            printf("Torre se moveu para DIREITA!\n");
            break;
        default:
            printf("Direção inválida para a Torre!\n");
            return;
    }

    moverTorre(direcao, passosRestantes - 1);
}

// Função para mover o Bispo
void moverBispo(int direcao, int passosRestantes) {
    if (passosRestantes == 0) {
        return; // Caso base, parar recursao
    }

    // Loops aninhados: primeiro move na vertical (i), depois horizonte (j)
    for (int i = 0; i < 1; i++) { // Vertical (sobe ou desce 1 unidade)
        for (int j = 0; j < 1; j++) { // Horizontal (vai para direita ou esquerda 1 unidade)
            switch (direcao) {
                case 1:
                    printf("Bispo se moveu para DIAGONAL CIMA DIREITA!\n");
                    break;
                case 2:
                    printf("Bispo se moveu para DIAGONAL CIMA ESQUERDA!\n");
                    break;
                case 3:
                    printf("Bispo se moveu para DIAGONAL BAIXO DIREITA!\n");
                    break;
                case 4:
                    printf("Bispo se moveu para DIAGONAL BAIXO ESQUERDA!\n");
                    break;
                default:
                    printf("Direção inválida para o Bispo!\n");
                    return;
            }
        }
    }

    moverBispo(direcao, passosRestantes - 1); // Chamada recursiva
}

//Função para mover a Rainha

void moverRainha(int direcao, int passosRestantes){
    if (passosRestantes == 0) {
        return;
    } 
    switch (direcao)
    {
        case 1:
            printf("Rainha se moveu para CIMA!\n");
            break;
        case 2:
            printf("Rainha se moveu para BAIXO!\n");
            break;
        case 3:
            printf("Rainha se moveu para ESQUERDA!\n");
            break;
        case 4:
            printf("Rainha se moveu para DIREITA!\n");
            break;
        default:
            printf("Direção inválida para a Rainha!\n");
            return;
    } 
            moverRainha(direcao, passosRestantes-1);
}

int main() {
    int opcao;

    // Menu Inicial
    printf("Bem-vindo ao jogo de xadrez!\n");
    printf("Escolha uma opção:\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Você escolheu jogar!\n");
    } else if (opcao == 2) {
        printf("Você escolheu sair!\n");
        return 0;
    } else {
        printf("Opção inválida!\n");
        return 1;
    }
    
    // Tabuleiro
    printf("===========================\n");
    printf("\nVamos começar movendo as peças!\n");
    printf("===========================\n");

    // Movimentos da Torre
    int direcaoTorre;
    printf("\nMovimentos da TORRE\n");
    printf("Digite 1 para cima, 2 para baixo, 3 para esquerda, 4 para direita: \n");
    scanf("%d", &direcaoTorre);
    printf("============================\n");

    moverTorre(direcaoTorre, 5); // Move a torre 5 vezes

    // Movimentos do Bispo
    int direcaoBispo;
    printf("\nMovimentos do BISPO\n");
    printf("Digite 1 para superior direita, 2 para superior esquerda, 3 para inferior direita, 4 para inferior esquerda: \n");
    scanf("%d", &direcaoBispo);
    printf("============================\n");

    moverBispo(direcaoBispo, 5); // Move o bispo 5 vezes

    //Movimentos da Rainha
    int direcaoRainha;
    printf("\nMovimentos da RAINHA\n");
    printf("Digite 1 para cima, 2 para baixo, 3 para esquerda, 4 para direita: \n");
    scanf("%d", &direcaoRainha);
    printf("============================\n");
    
    moverRainha(direcaoRainha, 8); // Move a rainha 8 vezes

    
    //Movimento do Cavalo com Loop Aninhado 

   
    printf("\n--- Movimento do Cavalo ---\n");

    printf("Escolha o movimento do Cavalo:\n");
    printf("Digite 1 para cima, direita.\n");
    printf("Digite 2 para cima, esquerda.\n");
    printf("Digite 3 para baixo, direita.\n");
    printf("Digite 4 para baixo, esquerda.\n");
    printf("Digite 5 para direita, cima.\n");
    printf("Digite 6 para direita, baixo.\n");
    printf("Digite 7 para esquerda, cima.\n");
    printf("Digite 8 para esquerda, baixo.\n");
    printf("===========================\n");
    printf("Digite sua opção: \n");
    printf("===========================\n");

    int movimentoCavalo;
    scanf("%d", &movimentoCavalo);

    printf("Movimento: %d\n", movimentoCavalo);
    printf("Cavalo se moveu para: \n");

    int movimentoCompleto = 1; // aqui o movimento completo vai rodar 1 vez
    
    while (movimentoCompleto--) {
        if (movimentoCavalo == 1) {
            for (int i = 0; i < 2; i++) {
                printf("CIMA\n");
            }
            printf("DIREITA\n");
        } 
        else if (movimentoCavalo == 2) {
            for (int i = 0; i < 2; i++) {
                printf("CIMA\n");
            }
            printf("ESQUERDA\n");
        } 
        else if (movimentoCavalo == 3) {
            for (int i = 0; i < 2; i++) {
                printf("BAIXO\n");
            }
            printf("DIREITA\n");
        } 
        else if (movimentoCavalo == 4) {
            for (int i = 0; i < 2; i++) {
                printf("BAIXO\n");
            }
            printf("ESQUERDA\n");
        } 
        else if (movimentoCavalo == 5) {
            for (int i = 0; i < 2; i++) {
                printf("DIREITA\n");
            }
            printf("CIMA\n");
        } 
        else if (movimentoCavalo == 6) {
            for (int i = 0; i < 2; i++) {
                printf("DIREITA\n");
            }
            printf("BAIXO\n");
        }
        else if (movimentoCavalo == 7) {
            for (int i = 0; i < 2; i++) {
                printf("ESQUERDA\n");
            }
            printf("CIMA\n");
        } 
        else if (movimentoCavalo == 8) {
            for (int i = 0; i < 2; i++) {
                printf("ESQUERDA\n");
            }
            printf("BAIXO\n");
        }
         else {
            printf("Movimento inválido!\n");
        }
    }

    printf("==========================\n");
    printf("Fim do jogo.\n");
    printf("Obrigado por jogar!\n");

    

    return 0;
}
