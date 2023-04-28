/*2) Faça uma função para receber uma string e um caractere. A função deverá retornar a quantidade
de vezes que o caractere recebido por parâmetro aparece na string.*/

#include<stdio.h>
#include<string.h>

int quantidade (char str[50], char carac){

    int cont=0, i=0;
    while (str[i]!='\0'){
        if (str[i]==carac){
            cont++;
        }
        i++;
        }
        printf ("Quantidade de caracteres %c: %d\n", carac, cont);
        }
        int main (){
                    char str [50], carac;
                    printf ("Digite uma palavra: ");
                    gets (str);
                    printf ("Digite uma letra: ");
                    scanf ("%c", &carac);
                    quantidade (str, carac);
        }









