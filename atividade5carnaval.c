#include <stdio.h>
#include <locale.h>
int main() {
    float dur, tmus, tprop, ttran, tres, tpmus;
    int totalmusicas;
    printf("Digite a duracao total do desfile em minutos:\n");
    scanf("%f", &dur);
    printf("Digite o tempo medio de cada musica em minutos:\n");
    scanf("%f", &tmus);
    printf("Digite o tempo total reservado para propagandas e interacoes com o publico em minutos:\n");
    scanf("%f", &tprop);
    printf("Digite em segundos o tempo medio gasto em cada transicao de musica:\n");
    scanf("%f", &ttran);
    ttran = ttran / 60;
    tpmus = tmus + ttran;
    totalMusicas = dur / tpmus;
    tres = dur - (totalMusicas * tpmus);
    printf("Numero de musicas completas que podem ser tocadas: %d \n", totalMusicas);
    printf("Tempo restante no final do desfile: %.2f minutos:", tres);

    return 0;
}
