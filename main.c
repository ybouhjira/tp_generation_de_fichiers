/**
  * Programme de génération des température
  * Réalisé par : Youssef Bouhjira et Mohamed Ayoub El Midaoui
  */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

/** Entrées :
  *   an : L'année
  *   mois : Le mois
  * Sorties :
  *   longeur : Le nombre de jour dans le mois
  */
int longueur_mois(int an, int mois)
{
  assert(1 <= mois && mois <= 12);
  return mois == 2 ? an % 4? 28 : 29 : 30 + (((mois * 9) / 8) & 1);
}

/** Entrées :
  *   fichier : Un fichier
  *   jour : un jour
  *   mois : Le mois dont lequel se trouve le jour jour.
  * Description :
  *   Génere les températures min et max d'un jour selon son mois
  */
void ecrire_jour(FILE *fichier, int jour, int mois)
{
  const int temp[] = {5, 7, 10, 11, 15, 17, 24, 22, 16, 15, 10, 7};
  // temp - 12 <= min <= temp - 2
  int min = rand() % 10 + temp[mois - 1] - 12;
  // temp + 2 <= max <= temp + 12
  int max = rand() % -10 + temp[mois - 1] + 2;
  fprintf(fichier, "\t\t%d : %d,%d\n", jour, min, max);
}

/** Entrées :
  *   fichier : Un fichier
  *   annee : L'année
  *   mois : Le mois
  * Description :
  *   Ecrit toutes les température du mois
  */
void ecrire_mois(FILE *fichier, int an, int mois)
{
  int jour;
  fprintf(fichier, "\t%d :\n", mois);
  for(jour = 1; jour <= longueur_mois(an, mois); ++jour)
    ecrire_jour(fichier, jour, mois);
}

/** Entrées :
 *    fichier : Le fichier
 *    anDebut : L'an de début
 *    anFin : L'an de fin
 * Description :
 *    Ecrit les température de tous les années entre anDebut et anFin
 */
void generation_temperatures(FILE *fichier, int anDebut, int anFin)
{
  int an, mois;
  for(an = anDebut; an <= anFin; ++an)
    {
      fprintf(fichier, "%d :\n", an);
      for(mois = 1; mois <= 12; ++mois)
        ecrire_mois(fichier, an, mois);
    }
}

int main()
{
  // initialisation du générateur de nombres aléatoire
  srand(time(NULL));

  // Lire le nom du fichier
  char nomFichier[100];
  printf("Entrez le nom du fichier : ");
  fgets(nomFichier,  100, stdin);

  // Ouverture du fichier
  FILE *fichier = fopen(nomFichier, "w+");
  if(fichier)
    {
      generation_temperatures(fichier, 1901, 2099);
      fclose(fichier);
    }
  else
    printf("Impossible d'ouvrir le fichier.\n");

  return 0;
}

