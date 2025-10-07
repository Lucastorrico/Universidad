// librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
// prototipo de validacion
int leerEnteroValido(const char *mensaje, int min, int max);
// funcion para la sentencia simple
int nu_par() {
    int n_par = leerEnteroValido("Ingrese un numero entero para ver si es par o impar: ", -32768, 32767);

    if (n_par % 2 == 0) {
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }
    return 0;
}
// funcion para la cadena de caracteres
char palabras_iguales() {
    char p1[50], p2[50];

    printf("Ingrese una palabra: ");
    fgets(p1, sizeof(p1), stdin);
    p1[strcspn(p1, "\n")] = '\0';

    printf("Ingrese otra palabra: ");
    fgets(p2, sizeof(p2), stdin);
    p2[strcspn(p2, "\n")] = '\0';

    if (strcmp(p1, p2) == 0) {
        printf("\nTienen el mismo contenido!!\n%s\n%s\n", p1, p2);
    } else {
        printf("\nSon cadenas de distinto contenido!!\n%s\n%s\n", p1, p2);
    }
    return 0;
}// funciones para la opcion 4
void dia() {
    printf("Buen dia\n");
}

int hoy() {
    printf("2\n");
    return 0;
}

// funcion main

int main() {
    int opcion;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Sentencias simples\n");
        printf("2. Sentencias repetitivas\n");
        printf("3. Cadena de caracteres\n");
        printf("4. Funciones\n");
        printf("5. Salir\n");

        opcion = leerEnteroValido("Ingrese una opcion: ", 1, 5);

        switch(opcion) {
            case 1:
                nu_par();
                break;
            case 2:
                printf("sentancias reptitivas \n");
                break;
            case 3:
                palabras_iguales();
                break;
            case 4:
                dia();
                hoy();
                break;
            case 5:
                printf("Salio del programa.\n");
                break;
        }

    } while (opcion != 5);

    return 0;
}
//funcion de verificacion de entero
int leerEnteroValido(const char *mensaje, int min, int max) {
    char entrada[100];
    int numero;
    int valido;

    do {
        valido = 1;
        printf("%s", mensaje);

        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {// lee toda la línea hasta el enter (o hasta llenar el buffer) y la guarda en entrada 
            printf("Error al leer entrada.\n");
            valido = 0;

        }

        entrada[strcspn(entrada, "\n")] = '\0'; // busca la posición del \n (el enter) y devolve su índice.

        // validar que solo haya digitos o signo negativo
        int i = 0;
        if (entrada[0] == '-') i = 1; //busca negativos
        for (; i < strlen(entrada); i++) {
            if (!isdigit((unsigned char)entrada[i])) {// busca que no existan caracteres en la entrada
                valido = 0;
                break;
            }
        }

        if (valido) {
            numero = atoi(entrada); // cambia entrada por un int
            if (numero < min || numero > max) { // verifica que este entre 1 y 5
                printf("Error: debe estar entre %d y %d.\n", min, max);
                valido = 0;
            }
        } else {
            printf("Error: ingrese un numero valido (sin letras ni comas).\n");
        }

    } while (!valido);

    return numero;
}

