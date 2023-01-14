

#include <stdio.h>

int main()
{
    printf("Este programa calcula el area de un rectangulo \n");
    int bas, alt,area;
    printf("Ingresa la base del rectangulo: \n");
    scanf_s("%d", &bas);
    printf("Ingresa la altura del rectangulo: \n");
    scanf_s("%d", &alt);

    area = bas * alt;

    printf("El area del rectangulo es igual a: %d", area);
    printf("\n");
    return 0;
}

