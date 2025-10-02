#include <stdio.h>
void billetera(float a, float c){
  float v = a-c;
  printf("el vuelto es de: %f", v);
}

void main(){
float b,t;
printf("ingrese el importe:");
scanf("%f", &t);
printf("ingrese el billete:");
scanf("%f", &b);
billetera(b,t);

}
