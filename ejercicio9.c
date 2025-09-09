#include <stdio.h>
void main(){
float b,t;
printf("ingrese el importe:");
scanf("%f", &t);
printf("ingrese el billete:");
scanf("%f", &b);
float v = b-t;
printf("el vuelto es de: %f", v);
}
