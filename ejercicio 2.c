#include <stdio.h>

int main() {
    int a, b, c, d, mayor;

    printf("Ingrese cuatro numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    mayor = a;  // suponemos que el primero es el mayor

    if (b > mayor)
        mayor = b;
    if (c > mayor)
        mayor = c;
    if (d > mayor)
        mayor = d;

    printf("El numero mayor es: %d\n", mayor);

    return 0;
}
