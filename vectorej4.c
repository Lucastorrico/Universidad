#include <stdio.h>

void main(){
    char n[50] = {2,3,4,6,12,15,2,4,5,9};
    int suma,i;
    for(i=0;i<10;i++){
        int r =n[i]%2;
        if(r!=0){
            n[i]=0;
        }
    }
    for(i=0;i<10;i++){
        suma = suma + n[i];
    }

    int t = suma/10;
    printf("el promedio de los numeros pares es: %d", t);

}
