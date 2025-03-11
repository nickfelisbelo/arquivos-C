#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int opcao;
    printf("Insira a estação do ano:\n1-Verão\n2-Outono\n3-Inverno\n4-Primavera\n");
    scanf("%d" ,&opcao);
    switch(opcao){
        case 1:
        printf("Verão");
        break;
        
        case 2:
        printf("Outono");
        break;
        
        case 3:
        printf("Inverno");
        break; 
        
        case 4:
        printf("Primavera");
        break;
        
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    } return 0; }