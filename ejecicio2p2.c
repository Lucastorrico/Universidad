#include <stdio.h>

int main() {
    int numeros[4];
    int i, mayor;

    printf("Ingrese cuatro numeros: ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
    }

    mayor = numeros[0]; // asumimos que el primero es el mayor

    for (i = 1; i < 4; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    printf("El numero mayor es: %d\n", mayor);

    return 0;
}
