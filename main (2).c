#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");//passar localização
    int caminhoes, alqueires, viagens;
    printf ("digite a quantidade de caminhões:\n");
    scanf("%d",&caminhoes);
    printf ("digite a quantidade de alqueires:\n");
    scanf("%d" ,&alqueires);
    viagens = (alqueires * 250) / (caminhoes * 18);
    printf("a quantidade de viagens será:%d",viagens);
    return 0;
}