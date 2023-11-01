#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Realice un programa para hallar cuántos números se debieron haber leído (ingresados por el usuario) para que la suma de los números negativos dé en valor absoluto mayor que 1200. */
     
    int num, ingresados, total, suma;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    suma=num;
    total=suma;

    for ( total = 0; total > 1200; total++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }
    
    /*while (total<=1200)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }*/

    printf("Numeros ingresados necesarios: %d, ", num);
    return 0;
}
