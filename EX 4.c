/*Faça uma função que receba duas strings e devolva em uma terceira string contendo a concatenação
dessas das duas outras strings.*/


#include<stdio.h>
#include<string.h>
int main() {
    char frase1 [100], frase2 [100];
    char concat [200];
    printf("Digite a string: \n");
    gets (frase1);
    printf("Digite a string: \n");
    gets (frase2);
    strcat(concat, frase1);
    strcat(concat, frase2);
    printf("Concatenacao: %s\n", concat);

    return 0;
}
