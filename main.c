#include <stdio.h>
#include <stdlib.h>


int main()
{
  printf("Bienvenue dans une calculatrice ");
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  printf("\n\n Entrez le calcul que vous souhaitez faire: ");
  scanf("%d", &nombre1);
  scanf("%d", &nombre2);

  if (nombre1+nombre2)
  {
      printf("\n\nVoici le resultat : %d ", nombre1+nombre2);
  }
  else if (nombre1-nombre2)
  {
      printf("\n\nVoici le resultat : %d ", nombre1-nombre2);
  }
  else if (nombre1*nombre2)
  {
      printf("\n\nVoici le resultat : %d", nombre1*nombre2);
  }
  return 0;
}
