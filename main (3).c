#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    char nome[20];
    int vitorias,empates,pontos;
    printf ("digite o nome do time:\n");
    scanf("%s",nome);
    printf ("digite o número de viórias:\n");
    scanf("%d" ,&vitorias);
    printf ("Digite o número de empates:\n");
    scanf("%d" ,&empates);
    pontos = (vitorias*3)+empates;
    printf("%s fez um total de %d pontos",nome, pontos);
    return 0;
}