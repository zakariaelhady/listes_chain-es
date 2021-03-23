#ifndef PERSONNE_H_included
#define PERSONNE_H_included

typedef char ch15 [16];
typedef void Objet;

typedef struct{
	ch15 nom;
	ch15 prenom;
}Personne;

Personne* creerPersonne(char* nom,char* prenom);
char* ecrirePersonne(Objet* objet);
int comparerPersonne(Objet* objet1,Objet* objet2);

#endif
