/*10) Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

#include<stdio.h>
#include<math.h>

int ret(int n, int y){
  printf("%d\n", n);
  if(n > y){
    return ret(n-1,y);
  }else{
    return 0;
  }
}
int main(){
  int n;
  int y = 0;
  printf("Digite um numero positivo: \n");
  scanf("%d", &n);
  ret(n,y);

  return 0;
}
