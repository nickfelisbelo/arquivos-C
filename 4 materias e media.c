#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float n1, n2, n3, n4, media;
    int opcao;
    while(opcao != 5){
        printf("Matemática(1)\n");
        printf("Português(2)\n");
        printf("Ciência(3)\n");
        printf("História(4)\n");
        printf("Sair(5)\n\n");
        scanf("%d" ,&opcao);
        if (opcao == 1){
        printf("Digite as notas:\n");
        scanf("%f %f %f %f" ,&n1, &n2, &n3, &n4);
        media = (n1 + n2 + n3 + n4) / 4;
        printf("Média em Matemática é %.2f\n", media);
         if (media >= 9){
             printf("Classificação A\n");
         } else if (media >= 7.5){
             printf ("Classificação B\n");
         } else if (media >= 6){
             printf ("Classificação C\n");
         } else if (media >= 4){
             printf("Classificação D\n");
         } else {
             printf("Classificação E\n");
         }
         if(media >= 6){
             printf("Aprovado\n\n");
         } else {
             printf("Reprovado\n\n");
         }
             } else if (opcao == 2){
                 printf("Digite as notas:\n");
        scanf("%f %f %f %f" ,&n1, &n2, &n3, &n4);
        media = (n1 + n2 + n3 + n4) / 4;
        printf("Média em Língua Portuguesa é %.2f\n", media);
         if (media >= 9){
             printf("Classificação A\n");
         } else if (media >= 7.5){
             printf ("Classificação B\n");
         } else if (media >= 6){
             printf ("Classificação C\n");
         } else if (media >= 4){
             printf("Classificação D\n");
         } else {
             printf("Classificação E\n");
         } 
         if (media >= 6){
         printf("Aprovado\n\n");
         } else {
             printf("Reprovado\n\n");
         }     } else if (opcao == 3){
                 printf("Digite as notas:\n");
        scanf("%f %f %f %f" ,&n1, &n2, &n3, &n4);
        media = (n1 + n2 + n3 + n4) / 4;
        printf("Média em Ciências é %.2f\n", media);
         if (media >= 9){
             printf("Classificação A\n");
         } else if (media >= 7.5){
             printf ("Classificação B\n");
         } else if (media >= 6){
             printf ("Classificação C\n");
         } else if (media >= 4){
             printf("Classificação D\n");
         } else {
             printf("Classificação E\n");
         } 
         if (media >= 6){
         printf("Aprovado\n\n");
         } else {
             printf("Reprovado\n\n");
         } 
         }  else if (opcao == 4){
                 printf("Digite as notas:\n");
        scanf("%f %f %f %f" ,&n1, &n2, &n3, &n4);
        media = (n1 + n2 + n3 + n4) / 4;
        printf("Média em História é %.2f\n", media);
         if (media >= 9){
             printf("Classificação A\n");
         } else if (media >= 7.5){
             printf ("Classificação B\n");
         } else if (media >= 6){
             printf ("Classificação C\n");
         } else if (media >= 4){
             printf("Classificação D\n");
         } else {
             printf("Classificação E\n");
         } 
         if (media >= 6){
         printf("Aprovado\n\n");
         } else {
             printf("Reprovado\n\n");
         } 
} 
}
return 0;
}