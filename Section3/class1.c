#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Operadores Relacionais;
  // Na lingaugem C, tudo o que tiver o valor '0' é 'falso', e qualquer valor diferente de zero (0) é 'verdadeiro''
  // Operadores:
  /* > (maior)
   * < (menor)
   * <= (menor ou igual)
   * >= (maior ou igual)
   * == (igual)
   * != (diferente)
   * = (um '=' - igual- só é símbolo de atribuição)
   */

  // printf("Hello, Wolrd!");
  printf("\t10 < 15 --> %d\n", 10 < 15);
  printf("\t10 > 15 --> %d\n", 10 > 15);
  printf("\t10 <= 15 --> %d\n", 10 <= 15);
  printf("\t10 >= 15 --> %d\n", 10 >= 15);
  printf("\t10 == 15 --> %d\n", 10 == 15);
  printf("\t10 == 10 --> %d\n", 10 == 10);
  printf("\t10 != 15 --> %d\n", 10 != 15);
  printf("\t15 != 15 --> %d\n", 15 != 15);

  return 0;
}