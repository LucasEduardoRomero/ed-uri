#include <stdio.h>
#include <string.h>

int main()
{
  char word1[1000];
  int p_aberto = 0;
  int p_fechado = 0;
  int erro = 0;
  int index = 0;

  scanf("%s", word1);
  for (index = 0; index < strlen(word1) - 1; index++)
  {
    if (word1[index] == ')')
    {
      p_fechado++;
      if (p_fechado > p_aberto)
      {
        erro = 1;
        break;
      }
    }
    else if (word1[index] == '(')
    {
      p_aberto++;
    }
  }
  if (erro == 1 || p_aberto != p_fechado)
  {
    printf("incorrect\n");
  }
  else
  {
    printf("correct\n");
  }
  return 0;
}