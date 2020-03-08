#include <stdio.h>

void test(void);
int contarCaracter(char *, char);

int main() {
  test();
  return 0;
}

/**
 *   @brief  Cuenta las veces que aparece un caracter determinado dentro de una cadena.
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  ch es el caracter a averiguar
 *   @return el numero de veces que aparece ch en array o -1 si no aparece.
 */
int obtenerIndice(char *array, char ch)
{
  int cnt = 0;
  while (*array != '\0')
  {
    if(ch == *array)
    {
        return cnt;
    }
    cnt++;
    array++;
  }
  return -1;
}

void test()
{
  char cad[] = "cadena";
  int cnt = obtenerIndice(cad,'a');
  printf("Posicion de a en \"%s\" : %d\n", cad, cnt);
  cnt = obtenerIndice(cad,'n');
  printf("Posicion de n en \"%s\" : %d\n", cad, cnt);
  cnt = obtenerIndice(cad,'p');
  printf("Posicion de p en \"%s\" : %d\n", cad, cnt);
}