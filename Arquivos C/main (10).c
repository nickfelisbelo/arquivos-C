#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int idade;
    printf ("Digite sua idade:\n");
    scanf("%d" ,&idade);
    if (idade >= 18 && idade <= 69){
        printf("Voto obrigatório");
    } else if (idade < 16) {
        printf("Proibido votar");
    } else if (idade >= 16 || idade >= 70){
        printf("Voto opicional");
    }
    return 0;
}