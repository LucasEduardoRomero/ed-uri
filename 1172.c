#include <stdio.h>
#include <string.h>

int main()
{
  int TAMANHO = 10;
  char vetor[TAMANHO];
  int index = 0;
  int value = 0;
  for (index = 0; index < TAMANHO; index++)
  {
    scanf("%d", &value);
    if (value <= 0)
    {
      value = 1;
    }
    vetor[index] = value;
  }
  for (index = 0; index < TAMANHO; index++)
  {
    printf("X[%d] = %d\n", index, vetor[index]);
  }

  return 0;
}