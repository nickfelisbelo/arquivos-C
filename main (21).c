#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int opcao;
    printf("Selecione o lanche:\n1 - X-Burguer\n2 - X-Salada\n3 - X-Bacon\n4 - Hot Dog\n5 - Refrigerante\n");
    scanf("%d" ,&opcao);
    switch(opcao){
        case 1:
        printf("X-Burguer\nR$ 10,00");
        break;
        
        case 2:
        printf("X-Salada\nR$ 12,00");
        break;
        
        case 3:
        printf("X-Bacon\nR$ 15,00");
        break; 
        
        case 4:
        printf("Hot Dog\nR$ 8,00");
        break;
        
        case 5:
        printf("Refrigerante\nR$ 5,00");
        break;
        
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    } return 0; }