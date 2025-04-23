#include    <stdio.h>

int main(){

    //Jogo de Xadrez

    //Menu 
    printf("Bem vindo ao jogo de xadrez!\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    printf("Digite a opcao desejada:\n");
   
    int opcao;
    scanf("%d", &opcao);
    //Verifica a opcao escolhida
    
    if (opcao == 1) {
        printf("Voce escolheu jogar!\n");

    } else if (opcao == 2) {
        printf("Voce escolheu sair!\n");
        return 0; // Encerra o jogo

    } else {
        printf("Opcao invalida!\n");
        return 1; // Sai com erro
    }

    //Tabuleiro
    printf("Vamos começar movendo a Torre, depois o Bispo e por último a Rainha.\n");

    // Movimentos da TORRE
printf("Escolha o movimento da Torre:\n");
printf("Digite 1 para cima, 2 para baixo, 3 para esquerda ou 4 para direita:\n");

int movimentoTorre;
scanf("%d", &movimentoTorre);

// FOR para repetir o movimento da Torre 5 vezes
for (int i = 0; i < 5; i++) {
    if (movimentoTorre == 1) {
        printf("Movimento %d: Torre para cima!\n", i + 1);
    } else if (movimentoTorre == 2) {
        printf("Movimento %d: Torre para baixo!\n", i + 1);
    } else if (movimentoTorre == 3) {
        printf("Movimento %d: Torre para esquerda!\n", i + 1);
    } else if (movimentoTorre == 4) {
        printf("Movimento %d: Torre para direita!\n", i + 1);
    } else {
        printf("Opcao invalida!\n");
    }
}

// Movimentos do BISPO

printf("==========================\n");
printf("Agora vamos mover o Bispo!\n");

int direcaoBispo;

    printf("Escolha a direção do movimento do Bispo:\n");
    printf("1 - Diagonal Cima + Direita.\n");
    printf("2 - Diagonal Cima + Esquerda.\n");
    printf("3 - Diagonal Baixo + Direita.\n");
    printf("4 - Diagonal Baixo + Esquerda.\n");
    printf("Digite sua opção: \n");
    scanf("%d", &direcaoBispo);

    int b = 0;

    while (b < 5) { //aqui o while vai rodar 5 vezes
        if (direcaoBispo == 1) {
            printf("Movimento %d: Cima, Direita.\n", b + 1);
        } else if (direcaoBispo == 2) {
            printf("Movimento %d: Cima, Esquerda.\n", b + 1);
        } else if (direcaoBispo == 3) {
            printf("Movimento %d: Baixo, Direita.\n", b + 1);
        } else if (direcaoBispo == 4) {
            printf("Movimento %d: Baixo, Esquerda.\n", b + 1);
        } else {
            printf("Opção inválida! Encerrando movimentos.\n");
            break; // sai do loop se a opção for inválida
        }

        b++;
    }

    // Movimentos da RAINHA
    //Usando Do-While para repetir o movimento da Rainha 8 vezes
    
    printf("==========================\n");
    printf("Agora vamos mover a Rainha!\n");
    printf("Escolha o movimento da Rainha:\n");
    printf("Digite 1 para cima, 2 para baixo, 3 para esquerda ou 4 para direita:\n");
    
    int movimentoRainha;
    scanf("%d", &movimentoRainha);

    int r = 0;

    do {
        if (movimentoRainha == 1) {
            printf("Movimento %d: Rainha para cima!\n", r + 1); //o r + 1 vai imprimir o movimento oito vezes
        } else if (movimentoRainha == 2) {
            printf("Movimento %d: Rainha para baixo!\n", r + 1);
        } else if (movimentoRainha == 3) {
            printf("Movimento %d: Rainha para esquerda!\n", r + 1);
        } else if (movimentoRainha == 4) {
            printf("Movimento %d: Rainha para direita!\n", r + 1);
        }
         
        else {
            printf("Opcao invalida! Encerrando movimentos.\n");
            break; // sai do loop se a opção for inválida
        }

        r++; //aqui incrementa o +1 no contador
    
    } while (r < 8); //e aqui o do-while vai rodar 8 vezes

    printf("==========================\n");
    printf("Jogo finalizado! Valeu por jogar!\n");
    printf("==========================\n");
        
    


 


    return 0;
}