/*5) Fa�a uma fun��o que receba uma quantidade de segundos e transforme em horas, minutos e
segundos. A fun��o dever� receber como par�metro quantidade total de segundos e devolver como
passagem de par�metro por refer�ncia a quantidade de horas, a quantidade de minutos e a quantidade
de segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int segundos, h, m, s, horas, minutos;

    printf("Digite um valor em segundos: ");
    scanf("%d", &s);

    h = s / 3600;
    m = s / 60;
    printf("horas: %d\n", h);
    printf("minutos: %d\n", m);
    printf("segundos: %d\n", s);

    return 0;
}
