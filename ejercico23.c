#include <stdio.h>
void main(){
int a,b,m,i,r;
printf("ingrese dos numeros");
scanf("%d %d", &a,&b);
do{
    printf("ingrese 1 para sumar\n");
    printf("ingrese 2 para restar\n");
    printf("ingrese 3 para multiplicar\n");
    printf("ingrese 4 para dividir\n");
    printf("ingrese 5 para salir\n");
    scanf("%d", &m);
    switch(m)
       case 1:
               r = a+b;
               printf("el resultado es %d \n", r);
       case 2:
               r = a+b;
               printf("el resultado es %d \n", r);
}while(m!=5);

}
