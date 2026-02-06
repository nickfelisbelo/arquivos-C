#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int ano;
    printf ("Digite o ano:\n");
    scanf("%d" ,&ano);
    if (ano % 4 == 0){
        printf("Ano é Bissexto");
    } else {
        printf("Ano é normal");
    }
    return 0;
}