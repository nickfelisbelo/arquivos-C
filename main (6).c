#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num;
    printf ("Digite um número:\n");
    scanf("%d" ,&num);
    if (num > 0){
        printf("Número positivo");
    } else if (num < 0){
        printf("Número negativo");
    } else {
        printf("Zero");
    }
    return 0;
}