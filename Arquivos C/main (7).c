#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num;
    printf ("Digite um número:\n");
    scanf("%d" ,&num);
    if (num % 2 == 0){
        printf("Número par");
    } else {
        printf("Número ímpar");
    }
    return 0;
}