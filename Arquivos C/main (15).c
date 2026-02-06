#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int opcao;
    float n1, n2, n3, n4, media;
    printf("ESCOLHA\n1-Português\n2-Mateática\n3-Ciências\n4-História\n\n");
    scanf("%d" ,&opcao);
    switch(opcao){
        case 1:
        printf("Você escolheu Português!\n\n");
        printf("Digite as notas:\n");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        case 2:
        printf("Você escolheu Matemática!\n\n");
        printf("Digite as notas:\n");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        case 3:
        printf("Você escolheu Ciências!\n\n");
        printf("Digite as notas:\n");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        case 4:
        printf("Você escolheu História!\n\n");
        printf("Digite as notas:\n");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        default:
        printf("Opção inválida! Programa encerrado");
        return 1;
    }
    media = (n1 + n2 + n3 + n4) / 4.0;
    printf("\n");
    printf("Média Final: %.2f\n\n", media);
    if (media >=9.0){
        printf("Conceito A\n");
        printf("Aprovado");
    }  else if (media >= 7.5){
        printf("Conceito B\n");
        printf("Aprovado");
    } else if (media >= 6.0){
        printf("Conceito C\n");
        printf("Aprovado");
    } else if (media >= 4.0){
        printf("Conceito D\n");
        printf("Reprovado");
    } else {
        printf("Conceito E\n");
        printf("Reprovado");
    }
    return 0;
}