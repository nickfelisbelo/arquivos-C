#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int lado1, lado2, lado3;
    printf ("Digite os lados do triângulo:\n");
    scanf("%d %d %d" ,&lado1, &lado2, &lado3);
    if (lado1 == lado2 && lado1 == lado3){
        printf("Triângulo equilatero");
    } else if (lado1 == lado2 && lado1 != lado3) {
        printf("Triângulo isóseles");
    } else {
        printf("Triângulo escaleno");
    }
    return 0;
}