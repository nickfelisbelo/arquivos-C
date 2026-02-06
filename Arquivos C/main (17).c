#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int opcao;
    float  n1, n2, res;
    printf("ESCOLHA\n1-Multiplicação\n2-Divisao\n3-Adição\n4-Subtração\n");
    scanf("%d" ,&opcao);
    printf("Escolha os números da conta:\n");
    scanf("%f %f", &n1, &n2);
    switch(opcao){
        case 1:
        res = n1 * n2;
        printf("O resultado é : %.2f", res);
        break;
        case 2:
        res = n1 / n2;
        printf("O resultado é : %.2f", res);
        break;
        case 3:
        res = n1 + n2;
        printf("O resultado é : %.2f", res);
        break;
        case 4:
        res = n1 - n2;
        printf("O resultado é : %.2f", res);
        break;
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    } return 0; }