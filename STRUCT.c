#include <stdio.h>
#include <stdlib.h> 

struct person
{
  char login[50];
  char pwd[50]; 
  char role[50];
}; 

void utilisateur ()
{
  struct person *p;
  p= malloc(3 * sizeof(struct person));
  
  if (p == NULL)
  {
    printf("Erreur d'allocation mémoire.\n");
    return; 
  }

  printf ("entrez votre login:");
  scanf ("%s", p[0].login);
  printf ("entrez votre password:");
  scanf ("%s" , p[0].pwd);
  printf ("entrez votre role:");
  scanf ("%s", p[0].role);
  
  for (int i=0; i<3; i++)
  {
    printf ("le login de la person n°%d est %s, son pwd est %s et son role est %s\n", i, p[i].login, p[i].pwd, p[i].role);
  }

  free(p);
}

int main ()
{
  struct person;
  utilisateur ();
  return 0;
}
