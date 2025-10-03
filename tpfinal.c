#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//funcion para la sentencia simple
int nu_par(){
    char entrada[100];
    int n_par;
    int valido;

    do {
        valido = 1;

        printf("Ingrese un numero para ver si es par o impar: ");

        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
            printf("Error al leer entrada.\n");
            valido = 0;
            continue;
        }
        entrada[strcspn(entrada, "\n")] = '\0'; // quitar salto de l�nea

        // validar que solo haya d�gitos
        for (int i = 0; i < strlen(entrada); i++) {
            if (!isdigit((unsigned char)entrada[i])) {//isdigit es una funcion que solo valida que se ingresen numeros
                valido = 0;
                break;
            }
        }

        if (valido) {
            n_par = atoi(entrada);// atoi sirve para volver una entrada
            int r = n_par % 2;
            if (r == 0) {
                printf("Es par\n");
            } else {
                printf("Es impar\n");
            }
        } else {
            printf("Error: debe ingresar un numero valido.\n");
        }

    } while (!valido);

    return 0;
}

//funcion para la cadena de caracteres
char palabras_iguales(){
    char p1[10], p2[10];

    printf("Ingrese una palabra: "); scanf("%s",p1);
    printf("Ingrese otra palabra: "); scanf("%s",p2);

    if (strcmp(p1,p2) == 0) {
        printf("\nTienen el mismo contenido!! \n%s\n%s \n",p1,p2);
    }else{
        printf("\nSon cadenas de distinto contenido!! \n%s \n%s \n",p1,p2);
    }
    return 0;
}

// funciones para la opcion 4
void dia(){
    printf("buen dia \n");
}

int hoy(){
    printf("2 \n");
    return 0;
}

//funcion main
void main() {
    char entrada[100];
    int opcion = 0;
    int valido;

    do {
        // pedir opci�n hasta que sea v�lida
        do {
            valido = 1;

            printf("\n=== MENU ===\n");
            printf("1. Sentencias simples\n");
            printf("2. Sentencias repetitivas\n");
            printf("3. Cadena de caracteres\n");
            printf("4. Funciones\n");
            printf("5. Salir\n");
            printf("Ingrese una opcion: ");

            if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
                printf("Error al leer entrada.\n");
                valido = 0;
                continue;
            }

            entrada[strcspn(entrada, "\n")] = '\0';

            // validar que solo haya d�gitos
            for (int i = 0; i < strlen(entrada); i++) {
                if (!isdigit((unsigned char)entrada[i])) {
                    valido = 0;
                    break;
                }
            }

            if (valido) {
                opcion = atoi(entrada);
                if (opcion < 1 || opcion > 5) {
                    printf("Error: ingrese un numero entre 1 y 5.\n");
                    valido = 0;
                }
            } else {
                printf("Error: ingrese solo numeros del 1 al 5 (no letras ni comas).\n");
            }

        } while (!valido); // repetir hasta que se ingrese algo v�lido

        // ejecutar opci�n v�lida
        switch(opcion){
            case 1:
                    nu_par();
                    break;
            case 2:
                 break;
            case 3:
                    palabras_iguales();
                    break;
            case 4:
                dia();
                hoy();
                break;

        }

    } while (opcion != 5);
    printf("salir del programa");


}

