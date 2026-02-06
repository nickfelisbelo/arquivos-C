#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float peso, altura, IMC;
    printf ("Digite seu peso:\n");
    scanf("%f" ,&peso);
    printf("Digite sua altura:\n");
    scanf("%f" ,&altura);
    IMC = peso / altura;
    if (IMC < 18.5){
        printf("Abaixo do peso");
    } else if (IMC >= 18.5 && IMC <= 24.9) {
        printf("Peso normal");
    } else if (IMC >= 25 && IMC <= 29.9){
        printf("Sobrepeso");
    } else {
        printf ("Obesidade");
    }
    return 0;
}