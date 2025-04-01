#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
    setlocale(LC_ALL,"");
    char cpf[15], nome[200], sobrenome[1000], end[20000], objeto[300];
    int opcao, opcao1, comida, bebida, dias, hospedes;
    float valor, pagar, vpHospedes;
    do{
    printf("O que deseja:\n1-Check-in\n2-Serviço de quarto\n3-Fazer pedido\n0-Sair\n");
    scanf("%d", &opcao);
    if (opcao > 3 || opcao < 0){
        printf("Erro! Tente Novamente");
        continue;
    } else if (opcao == 0){
            printf("Saindo");
            break;
        }
     else {
    switch(opcao){
        case 1:
        printf("Faça o check-in\n");
        printf("Insira o nome:\n");
        scanf ("%s", nome);
        printf("Insira o seu sobre nome:\n");
        scanf("%s", sobrenome);
        printf("Endereço:\n");
        scanf("%s", end);
        printf("CPF:\n");
        scanf("%s" ,cpf);
        printf("Digite a quantidade de dias que precisa(R$ 200,00 o dia)\n");
        scanf("%d", &dias);
        do{
        printf("Você gostaria de um quarto para quantas pessoas(até 7 pessoas)\n");
        scanf("%d", &hospedes);
        if (hospedes > 7){
            printf("Escolha um valor de 1-7\n");
            continue;
        }
        } while (hospedes > 7 || hospedes <= 0);
        switch(hospedes){
            case 1:
            vpHospedes = 200;
            break;
            case 2:
            vpHospedes = 190;
            break;
            case 3:
            vpHospedes = 180;
            break;
            case 4:
            vpHospedes = 170;
            break;
            case 5:
            vpHospedes = 160;
            break;
            case 6:
            vpHospedes = 150;
            break;
            case 7:
            vpHospedes = 140;
            break;
        }
        printf("Check-in completo\n\n");
        printf("Informações :\n%s %s\n%s\n%s", nome, sobrenome, end, cpf);
        pagar = vpHospedes * dias;
        printf("Valor a ser pago\nR$ %.2f", pagar);
        break;
        
        case 2:
        printf("Qual serviço deseja:\n1-Arrumar o quarto\n2-Manutenção\n3-Trazer um objeto\n0-Nenhuma das opções\n");
        scanf("%d" ,&opcao1);
        do{
            printf("Erro!Tente Novamente");
        } while (opcao1 > 3 || opcao1 < 1);
        if (opcao1 == 0){
            break;
        }  switch(opcao1){
             case 1:
             printf("Estamos mandando funcionarios");
             break;
             case 2:
             printf("Estamos informando a gerencia sobre");
             break;
             case 3:
             printf("Informe o objeto");
             scanf("%s", objeto);
             printf("Seu objeto será enviado");
             break;
         } 
         break;
         
         case 3:
         printf("O que deseja:\n1-Alimento\n2-Bebida\n0-Nenhuma das opções\n");
         scanf("%d", &opcao1);
         if (opcao1 == 0){
             break;
         } do {
                 printf("Erro! Tente Novamente");
         } while (opcao1 > 2 || opcao1 < 0);
         switch(opcao1){
             case 1:
             printf("Qual comida deseja:\n1-Café da manhã\n2-Doces\n3-Almoço\n4-Jantar\n");
             scanf("%d", &comida);
              switch(comida){
                  case 1:
                  printf("Estamos preparando seu café da manhã. Por favor, aguarde");
                  break;
                  case 2:
                  printf("Estamos enviando seus doces. Por favor, aguarde");
                  break;
                  case 3:
                  printf("Estamos preparando seu almoço. Por favor, aguarde");
                  break;
                  case 4:
                  printf("Estamos preparando sua janta. Por favor, aguarde");
                  break;
                  default:
                  printf("Erro");
                  return 1;
              } break;
             case 2:
             printf("Qual bebida deseja:\n1-Agua\n2-Refrigerante\n3-Suco natural\n4-Coquetel\n");
             scanf("%d", &bebida);
             do{
                  printf("SELECIONE:\n1-Agua\n2-Refrigerante\n3-Suco natural\n4-Coquetel\n");
                  scanf("%d", &bebida);
             }while (bebida > 1 || bebida > 4)
              switch(bebida){
                  case 1:
                  printf("Estamos enviando sua água. Se hidrate:)");
                  break;
                  case 2:
                  printf("Estamos enviando seu refrigerante");
                  break;
                  case 3:
                  printf("Estamos preparando seu suco");
                  break;
                  case 4:
                  printf("Estamos preparando seu coquetel. Por favor, aguarde.");
                  default:
                  printf("Erro!");
                  return 1;
              }
              break;
         }
       
    }
    }
    printf("\nDigite\n1-Voltar ao menu principal\n0-Sair\n");
    scanf("%d", &opcao);
    system("clear");
    } while(opcao != 0);
        return 0;
    }
