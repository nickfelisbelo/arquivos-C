#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int dia;
    printf("ESCOLHA\n1-Domingo\n2-Segunda\n3-Terça\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sabádo\n");
    scanf("%d" ,&dia);
    switch( dia){
        case 1:
        printf("Hoje é Domingo!");
        break;
        
        case 2:
        printf("Hoje é Segunda!");
        break;
        
        case 3:
        printf("Hoje é Terça!");
        break;
        
        case 4:
        printf("Hoje é Quarta!");
        break;
        
        case 5:
        printf("Hoje é Quinta!");
        break;
        
        case 6:
        printf("Hoje é Sexta!");
        break;
        
        case 7:
        printf("Hoje é Sabádo!");
        break;
        
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    }
    return 0;
}