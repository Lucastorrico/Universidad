// librerias
#include <stdio.h>
#include <string.h>
int nu_par(){//primera opcion un programa de sentencia simples, en este caso ver si un numero es par o impar
             int n_par;
             printf("ingrese un numero para ver si es par o impar \n");
             scanf("%d", &n_par);
             int r= n_par%2;

             if(r==0){
                printf("es par \n");
             }else{
                printf("es impar \n");
             } //falta comprobar si es un numero o no
}
char palabras_iguales(){// tercera opcion un programa que contenga cadenas de caracteres,en este caso ver si las palabras son iguales
            char p1[10],p2[10];

            printf("Ingrese una palabra: "); scanf("%s",p1);
            printf("Ingrese otra palabra: "); scanf("%s",p2);


            if (strcmp(p1,p2) == 0) { //como strcmp es una funcion booleana si es 0 quiere decir que es verdadero si es 1 quiere decir que es falso
                printf("\nTienen el mismo contenido!! \n%s\n%s \n",p1,p2);
            }else{
                    printf("\nSon cadenas de distinto contenido!! \n%s \n%s \n",p1,p2);
                }//falta comprobar si es o no una palabra
}
// funciones para la 4 falta la 2 y 4
void dia(){
printf("buen dia: ");
}

int hoy(){
   printf("2 \n");
}
//funcion main
void main()
{
    int opcion;
    do {
        printf("ingrese 1.Para Sentencias simples \n");
        printf("ingrese 2.Para Sentencias repetitivas \n");
        printf("ingrese 3.Cadena de caracteres \n");
        printf("ingrese 4.Funciones \n");
        printf("ingrese 5.Salir \n"); // opciones del menu
        scanf("%d", &opcion); //selector de opcion
        if(opcion > 5 || opcion < 0){
            printf("ingrese numeros del 1 al 5 \n");
        }
        switch(opcion){
        case 1: //primera opcion un programa de sentencia simples,
            //en este caso ver si un numero es par o impar
             nu_par();
             break;
        case 2:
            break;
        case 3:
            // tercera opcion un programa que contenga cadenas de
            //caracteres,en este caso ver si las palabras son iguales
                palabras_iguales();
                break;
        case 4:

          dia();
          hoy();




        }
    }while(opcion!=5);
    printf("salio del programa");
}
