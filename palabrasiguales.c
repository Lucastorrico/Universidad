#include <stdio.h>
#include <string.h>
char palabras_iguales(){
            char p1[10],p2[10];

            printf("Ingrese una palabra: ");
            scanf("%s",p1);
            printf("Ingrese otra palabra: ");
            scanf("%s",p2);


            if (strcmp(p1,p2) == 0) {
                printf("\nTienen el mismo contenido!! \n%s\n%s \n",p1,p2);
            }else{
                    printf("\nSon cadenas de distinto contenido!! \n%s \n%s \n",p1,p2);
                }
}
void main()
{

    palabras_iguales();
}
