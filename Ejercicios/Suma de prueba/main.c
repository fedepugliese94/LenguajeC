#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resultado;
    printf("Hello world!\n");
    printf("Ingresar un numero:");
    scanf("%d", &numero1);
    printf("Ingrese otro numero:");
    scanf("%d", &numero2);
    resultado=numero1+numero2;
    printf("%d", resultado);


    return 0;
}
