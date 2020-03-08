#include <stdio.h>
#include <string.h>

char *obtenerSubcadena(char *, int);
void test(void);

int main()
{
    test();
    return 0;
}

/**
 *  @brief  Obtiene una subcadena a tomada a partir de un subindice asociado a una subcadena
 *
 *  @param  array cadena de caracteres a ingresar
 *  @param  index indice
 *  @return un apuntador a la posicion inicial de la subcadena o NULL si el tamaño de index supera a la longitud de la cadena
 */
char *obtenerSubcadena(char *array, int index) {
    int cnt = 0;
    while (*array != '\0')
    {
        if (cnt == index)
        {
            return array;
        }
        array++;
        cnt++;
    }
    return "\0";
}

void test()
{
    char *p1 = "Hola que tal";
    char *p2;
    p2 = obtenerSubcadena(p1, 5);
    printf("%s\n",p1);    // Imprime: Hola que tal
    printf("%s\n",p2);    // Imprime: que tal
    p2 = obtenerSubcadena(p1, 15);
    printf("%s\n",p2);
}