/*1) Faça uma função para receber um número inteiro e retornar se ele é primo ou não. Se o número for
primo a função retorna o valor 1, caso contrário retorna o valor 0.
*/

#include<stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;

 printf("Digite um número: ");
 scanf("%d", &num);

 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }

 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);

 return 0;
}
