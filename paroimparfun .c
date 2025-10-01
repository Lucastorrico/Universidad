#include <stdio.h>
int nu_par(){
int n_par;
             printf("ingrese un numero para ver si es par o impar \n");
             scanf("%d", &n_par);
             int r= n_par%2;

             if(r==0){
                printf("es par \n");
             }
             else{
                printf("es impar \n");
             }

}
void main(){
   nu_par();
}
