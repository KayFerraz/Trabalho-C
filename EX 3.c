/*3) Fa�a uma fun��o para receber uma string e retornar a quantidade de n�meros e letras que a string
cont�m. Nesse exerc�cio, fa�a o retorno das quantidades utilizando a passagem de par�metros por
refer�ncia.*/

#include<stdlib.h>
#include<math.h>
void quantidade(char *string, int *cont){
    int i=0;
    while (string[i] != '\0'){
        i++;
    }
    *cont = i;
}
void quantidade2(char *string, int *cont){
    *cont = 0;
    while (string[*cont] != '\0'){
        (*cont)++;
    }
}
int main(){
   char texto[40];
   int quant, quant2;
   printf("Digite uma string: ");
   scanf("%s",&texto);
   printf("String digitada: %s\n",texto);
   quantidade(texto, &quant);
   printf("Quantidade letras/numeros: %d\n",quant);
   quantidade2(texto, &quant2);
   return 0;
}
