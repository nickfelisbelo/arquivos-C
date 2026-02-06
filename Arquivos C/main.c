//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int a,b,c,d;
    printf("Digite o primeiro número:\n"); 
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    printf("Digite o terceiro número:\n");
    scanf("%d", &c);
    //Processamento
    d= (a+b)/c;
    printf ("O resulatdo é:%d",d);
    return 0;
}