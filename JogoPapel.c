#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    srand(time(NULL)); // Inicializa a semente de n�meros aleat�rios com o tempo atual

    char palavras[][7] = {"caro", "m�dio", "barato"}; // Matriz de strings contendo as palavras

    int indice = rand() % 3; 
    
    char frases[][50] = {"Alugar filme", "Assinar plataforma", "Achar um filme nos canais dispon�veis"}; // Matriz de strings contendo as palavras

    int filme = rand() % 3;
    
    char doces[][50] = {"Surpresa de Uva", "Torta de Frango", "Pizza Caseira"}; // Matriz de strings contendo as palavras

    int doce = rand() % 3;
    
    printf("*********************************************Bem vinda ao Jogo das Escolhas*********************************************\n\n\n");

    int opcao;
    
    printf("Voc� quer um passeio...\n");
    printf("1. Com destino\n");
    printf("2. Sem destino\n");
    printf("3. N�o quero passeio\n");
    
    scanf("%d", &opcao);
    
    
    switch (opcao) {
        case 1:
            printf("Voc� quer um passeio com destino. \n");
            printf("Mas voc� quer um... \n");
            
            int opcao1;   
            
                printf("1. Cineminha\n");
                printf("2. Rol� em SP\n");
                printf("3. +18\n");
                scanf("%d", &opcao1);
            
                switch (opcao1) {
                    case 1:
                        printf("Voc� quer um Cineminha...\n");
                            int opcao11;
                                printf("1. �til\n");
                                printf("2. F�cil\n");
                                printf("3. Diferente\n");
                                scanf("%d", &opcao11);
                                 if (opcao11 == 1) {
                                     printf("Vamos para o Cinema do Atrium!\nQual filme veremos?");
                                 break;} else if (opcao11 == 2) {
                                     printf("Vamos para o Cinema do Plaza!\nQual filme veremos?");
                                 break;} else {
                                     printf("Vamos para o Cinema do SCS!\nQual filme veremos?");
                                 break;}
                    case 2:
                        printf("Simbora pra KEZ Padaria comer um Cinnamol Roll.\nCompra as passagens do metro, pega um guarda-chuva e partiu! ");
                        break;
                    case 3:
                        printf("Hmmm safadinha... ( ?� ?? ?�)\nO valor do quarto, escolhido pelo programa, � %s", palavras[indice]);
                        break;
                } break;  
        case 2:  
            printf("Voc� quer um passeio sem destino. \n");
            printf("Escolha um n�mero e vamos ver... \n");
            
            int opcao2;   
            
                printf("1\n");
                printf("2\n");
                printf("3\n");
                scanf("%d", &opcao2);
                if (opcao2 == 1) {
                    printf("Vamos para o parque dar um rolezin. \nComo � algo curto, voc� tem direito a mais uma rodada.");
                break;} else if (opcao2 == 2) {
                    printf("Vamos andar na rua, sem rumo, at� achar algo que queira parar. \nComo � algo curto, voc� tem direito a mais uma rodada.");
                break;} else {
                    printf("Vamos descer no shopping sem destino, e comer alguma coisinha, que dever� ser escolhida pelo programa de Comidas.");
                break;}
        break;       
        case 3:
            printf("Voc� n�o quer passear, sem problemas.\n");
            printf("O que gostaria de fazer em casa?\n");
                
            int opcao3;   
            
                printf("1\n");
                printf("2\n");
                printf("3\n");
                scanf("%d", &opcao3);
                if (opcao3 == 1) {
                    printf("Voc� escolheu em ver um filme, mas nada aqui � normal, ent�o tinha chance de cair: ");
                    printf("'Alugar filme', 'Assinar plataforma' e 'Achar um filme nos canais dispon�veis'.\nE o programa escolheu: %s", frases[filme]);
                } else if (opcao3 == 2) {
                    printf("Voc� escolheu fazer uma receita!! Olha o que poderia cair: ");
                    printf("'Surpresa de Uva', 'Torta de Frango' ou 'Pizza Caseira'.\nE o programa escolheu: %s", doces[doce]);
                } else {
                    printf("Voc� vai pedir comida!! Entre no programa de Comidas.");
                }
                    
        break;        
    
}
return 0;
}