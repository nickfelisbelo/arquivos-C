#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
    setlocale(LC_ALL,"");
    char cpf[15], nome[200], end[20000], objeto[300];
    int opcao, opcao1, comida, bebida, dias;
    float valor, pagar;
    do{
    printf("O que deseja:\n1-Check-in\n2-Serviço de quarto\n3-Fazer pedido\n0-Sair\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Faça o check-in\n");
        printf("Insira o nome:\n");
        scanf ("%s", nome);
        printf("Endereço:\n");
        scanf("%s", end);
        printf("CPF:\n");
        scanf("%s" ,cpf);
        printf("Digite a quantidade de dias que precisa(R$ 200,00 o dia)");
        scanf("%d", &dias);
        printf("Check-in completo\n\n");
        printf("Informações :\n%s\n%s\n%s", nome, end, cpf);
        pagar = 200 * dias;
        printf("Valor a ser pago\nR$ %.2f", pagar);
        break;
        
        case 2:
        printf("Qual serviço deseja:\n1-Arrumar o quarto\n2-Manutenção\n3-Trazer um objeto\n");
        scanf("%d" ,&opcao1);
         switch(opcao1){
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
             default:
             printf("Erro");
             return 1;
         }
         break;
         
         case 3:
         printf("O que deseja:\n1-Alimento\n2-Bebida\n");
         scanf("%d", &opcao1);
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
              }
              break;
              
              default:
              printf("Erro. Tente novamente.");
         }
       
    }
    printf("\nDigite\n1-Voltar ao menu principal\n0-Sair\n");
    scanf("%d", &opcao);
    system("clear");
    } while(opcao == 1);
        return 0;
    }
