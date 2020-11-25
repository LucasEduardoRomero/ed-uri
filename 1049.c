#include <stdio.h>
#include <string.h>

int main()
{
  char word1[20], word2[20], word3[20], finalWord[20];
  scanf("%s", word1);
  scanf("%s", word2);
  scanf("%s", word3);

  if (strcmp(word1, "vertebrado") == 0)
  {
    if (strcmp(word2, "ave") == 0)
    {
      if (strcmp(word3, "carnivoro") == 0)
      {
        printf("aguia");
      }
      else if (strcmp(word3, "onivoro") == 0)
      {
        printf("pomba");
      }
    }
    else if (strcmp(word2, "mamifero") == 0)
    {
      if (strcmp(word3, "onivoro") == 0)
      {
        printf("homem");
      }
      else if (strcmp(word3, "herbivoro") == 0)
      {
        printf("vaca");
      }
    }
  }
  else if (strcmp(word1, "invertebrado") == 0)
  {
    if (strcmp(word2, "inseto") == 0)
    {
      if (strcmp(word3, "hematofago") == 0)
      {
        printf("pulga");
      }
      else if (strcmp(word3, "herbivoro") == 0)
      {
        printf("lagarta");
      }
    }
    else if (strcmp(word2, "anelideo") == 0)
    {
      if (strcmp(word3, "hematofago") == 0)
      {
        printf("sanguessuga");
      }
      else if (strcmp(word3, "onivoro") == 0)
      {
        printf("minhoca");
      }
    }
  }

  printf("\n");
  return 0;
}