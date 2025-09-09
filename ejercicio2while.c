#include <stdio.h>
void main(){
 int N,i, suma;
 printf("ingrese un numero: \n");
 scanf("%d", &N);
 while(i<=N){
    suma += i;
    i++;

 }
 printf("el resultado es: %d", suma);
}
