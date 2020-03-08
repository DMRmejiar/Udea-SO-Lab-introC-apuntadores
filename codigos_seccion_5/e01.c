#include <stdio.h>

void test(void);
int contarCaracter(char *, char);

int main()
{
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
int contarCaracter(char *array, char ch) {
  int cnt = 0;
  while (*array != '\0')
  {
    if(ch == *array)
    {
      cnt++;
    }
    array++;
  }
  if (cnt == 0)
  {
    cnt = -1;
  }
  return cnt;
}

void test()
{
  char cad[] = "cadena";
  int cnt = contarCaracter(cad,'a');
  printf("Contar a en \"%s\" : %d\n", cad, cnt);
  cnt = contarCaracter(cad,'n');
  printf("Contar n en \"%s\" : %d\n", cad, cnt);
  cnt = contarCaracter(cad,'p');
  printf("Contar p en \"%s\" : %d\n", cad, cnt);
}