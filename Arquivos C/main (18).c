#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int opcao;
    printf("Insira o mês\n");
    scanf("%d" ,&opcao);
    switch(opcao){
        case 1:
        printf("Janeiro");
        break;
        
        case 2:
        printf("Fevereiro");
        break;
        
        case 3:
        printf("Março");
        break;
        
        case 4:
        printf("Abril");
        break;
        
        case 5:
        printf("Maio");
        break;
        
        case 6:
        printf("Junho");
        break;
        
        case 7:
        printf("Julho");
        break;
        
        case 8:
        printf("Agosto");
        break;
        
        case 9:
        printf("Setembro");
        break;
        
        case 10:
        printf("Outubro");
        break;
        
        case 11:
        printf("Novembro");
        break;
        
        case 12:
        printf("Dezembro");
        break;
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    } return 0; }