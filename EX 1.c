/*1) Fa�a uma fun��o para receber um n�mero inteiro e retornar se ele � primo ou n�o. Se o n�mero for
primo a fun��o retorna o valor 1, caso contr�rio retorna o valor 0.
*/

#include<stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;

 printf("Digite um n�mero: ");
 scanf("%d", &num);

 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }

 if (resultado == 0)
    printf("%d � um n�mero primo\n", num);
 else
    printf("%d n�o � um n�mero primo\n", num);

 return 0;
}
