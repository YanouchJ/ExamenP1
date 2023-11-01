#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Realice un programa para hallar cuántos números se debieron haber leído (ingresados por el usuario) para que la suma de los números negativos dé en valor absoluto mayor que 1200. */
     
    int num, ingresados, total, suma, total2;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    while (num<1200)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        suma=suma+num;
        total=suma;
        for ( total = 0; total > 1200; total++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }
    }
        suma=suma+num;
        total2=suma;

    printf("Numeros ingresados necesarios: %d ", total2);
    return 0;
}
