#include <stdio.h>
void main(){
int n;
printf("ingrese un numero \n");
scanf("%d", &n);
int resultado = n%2;
if(resultado== 0){
    printf("numero par");
}else{
    printf("numero impar");
}



}
