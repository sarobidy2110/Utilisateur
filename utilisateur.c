#include <stdio.h>

struct user 
{
    char name[50];
    char pwd[50];
    char role[100];
};
int adduser ()
{
    struct user u[3];
    int i;
    printf ("Entrer votre nom:\n");
    scanf ("%s" ,u[0].name);
    printf ("Entrer votre pwd:\n");
    scanf ("%s",u[0].pwd);
    printf ("Entrer votre role:\n");
    scanf ("%s", u[0].role);
    for (i=0; i<=3; i++)
    {
        printf ("le nom de la personne numero %d est %s", i, u[i].name);
        printf ("le mdp de la personne numero %d est %s",i, u[i].pwd);
        printf ("la personne numero %d est un %s", i, u[i].role);
    }
}

int main ()
{
    adduser ();
    return 0;
}
