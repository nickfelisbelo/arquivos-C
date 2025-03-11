#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num, i, valor;
    printf("Digite um número:\n");
    scanf("%d" ,&num);
    printf("A tabuada de %d é :\n", num);
    for (i = 1; i <= 10; i++){
    valor = num * i;
    printf("%d \n", valor);
    }
    return 0;
}