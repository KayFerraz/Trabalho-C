/*7) Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci.
Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89*/

#include<stdio.h>

int  fibonacci ( int n) {
	if (n <= 2 ) {
		return  1 ;
	}
	return  fibonacci (n - 1 ) + fibonacci (n - 2 );
}


int main (){
    int n, resultado;
    printf ("Digite o termo desejado: \n");
    scanf ("%d", &n);
    resultado = fibonacci(n);
    printf ("O numero do termo %d: %d\n", n, resultado);
    return 0;
}
