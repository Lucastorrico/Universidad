#include <stdio.h>
void main(){
    float a,b,i,r;
    int m;

do{

    printf("ingrese 1 para sumar\n");
    printf("ingrese 2 para restar\n");
    printf("ingrese 3 para multiplicar\n");
    printf("ingrese 4 para dividir\n");
    printf("ingrese 5 para salir\n");
    scanf("%d", &m);


    switch(m)
    {


       case 1:
               printf("ingrese dos numeros: \n");
               scanf("%f %f", &a,&b);
               r= a+b;
               printf("el resultado es %f \n", r);
               break;
       case 2:
               printf("ingrese dos numeros: \n");
               scanf("%f %f", &a,&b);
               r= a-b;
               printf("el resultado es %f \n", r);
               break;
       case 3:
             printf("ingrese dos numeros: \n");
             scanf("%f %f", &a,&b);
             r= a*b;
             printf("el resultado es %f \n", r);
             break;
       case 4:
            printf("ingrese dos numeros: \n");
            scanf("%f %f", &a,&b);
            r= a/b;
            printf("el resultado es %f \n", r);

    }
}while(m!=5);

}


