#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float compra, cdesconto;
    printf ("Digite o valor da compra:\n");
    scanf("%f" ,&compra);
    if (compra > 500){
        cdesconto = compra * 0.9;
        printf("Valor da compra é %.2f", cdesconto);
    } else if (compra >200) {
        cdesconto = compra * 0.95;
        printf("Valor da compra é %.2f", cdesconto);
    } else {
        printf("Valor da compra é %.2f", compra);
    }
    return 0;
}