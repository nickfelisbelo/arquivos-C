#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int opcao;
    float real, conv;
    printf("Insira a moeda a qual irá converter:\n1 - Dólar\n2 - Euro\n3 - Libra\n");
    scanf("%d" ,&opcao);
    switch(opcao){
        case 1:
        printf("Digite o valor em reais\n");
        scanf("%f", &real);
        conv = real / 5.86;
        printf("Valor em Dólar é : $%.2f", conv);
        break;
        
        case 2:
        printf("Digite o valor em reais\n");
        scanf("%f", &real);
        conv =  real * 0.156;
        printf("Valor em Euro é : %.2f EUR", conv);
        break;
        
        case 3:
        printf("Digite o valor em reais\n");
        scanf("%f", &real);
        conv = real * 0.132;
        printf("Valor em Libras : %2.f", conv);
        break;
        
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    } return 0; }