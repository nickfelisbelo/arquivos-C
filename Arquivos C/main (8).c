#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    printf ("Digite um número:\n");
    scanf("%d" ,&num1);
    printf("Digite outro número:\n");
    scanf("%d", &num2);
    if (num1 > num2){
        printf("%d é maior", num1);
    } else {
        printf("%d é maior", num2);
    }
    return 0;
}