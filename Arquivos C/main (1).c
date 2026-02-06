#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");//passar localização
    char nome[20];
    float sal,reajuste,novosal;
    printf ("digite seu nome:\n");
    scanf("%s",nome);
    printf ("digite seu salario:\n");
    scanf("%f" ,&sal);
    printf ("Digite o reajuste:\n");
    scanf("%f" ,&reajuste);
    novosal = sal + sal * reajuste / 100;
    printf("%s Seu novo salario é de %.2f",nome, novosal);
    return 0;
}