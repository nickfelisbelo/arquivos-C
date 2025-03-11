#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float n1,n2,n3,n4,media;
    printf ("digite a primeira nota:\n");
    scanf("%f" ,&n1);
    printf ("digite a segunda nota:\n");
    scanf("%f" ,&n4);
    printf ("Digite a terceira nota:\n");
    scanf("%f" ,&n3);
    printf("Digite a quarta nota:\n");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("média é %.2f", media);
    return 0;
}