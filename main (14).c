#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num1, num2, num3;
    printf ("Digite o primeiro número:\n");
    scanf("%d" ,&num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2)
    printf ("Digite o terceiro número:\n");
    scanf("%d" ,&num3);
    if (num 1 == num2 && num1 == num3){
        printf("Todos os lados são iguais");
    } else if (num 1 > num2 && num1 > num3) {
        printf("%d é o maior número", num1)
    } else if (num2 > num1 && num2 > num3){
        printf("Maior número é %d", num2);
    } else {
        printf ("%d é o maior número", num3);
    }
    return 0;
}