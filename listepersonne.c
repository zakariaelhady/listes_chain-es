#include <stdio.h>
#include <stdlib.h>
#include"liste.h"
#include"personne.h"

int menu () {
printf ("\n\nGESTION D'UNE LISTE DE PERSONNES\n\n");
printf ("0 - Fin\n");
printf ("1 - Insertion en tete de liste\n");
printf ("2 - Insertion en fin de liste\n");
printf ("3 - Retrait en tete de liste\n");
printf ("4 - Retrait en fin de liste\n");
printf ("5 - Retrait d'un element a partir de son nom\n");
printf ("6 - Parcours de la liste\n");
printf ("7 - Recherche d'un element a partir de son nom\n");
printf ("8 - Destruction de la liste\n");
printf ("\n");
printf ("Votre choix ? ");
int cod; scanf ("%d", &cod);
printf ("\n");
return cod;
}

main(){
Liste* lp=creerListe(0,ecrirePersonne,comparerPersonne);
bool fini=false;
while(!fini){
	switch(menu()){
		case 0 :
            fini=true;
        break;
        case 1 :{
            printf("Nom de la personne a creer ? ");
            ch15 nom;
            scanf("%s",nom);
            printf("Prenom de la personne a creer ? ");
            ch15 prenom;
            scanf("%s",prenom);
            Personne* nouveau=creerPersonne(nom,prenom);
            insererEnTeteDeListe(lp,nouveau);}
        break;
        case 2 :{
            printf("Nom de la personne a creer ? ");
            ch15 nom;
            scanf("%s",nom);
            printf("Prenom de la personne a creer ? ");
            ch15 prenom;
            scanf("%s",prenom);
            Personne* nouveau=creerPersonne(nom,prenom);
            insererEnFinDeListe(lp,nouveau);}
        break;
        case 3 :{
        	Personne* extrait=(Personne*)extraireEnTeteListe(lp);
            if(extrait!=NULL){
            	printf("Element %s %s extrait en tete de liste",extrait->nom,extrait->prenom);
			}else{printf("Liste vide");
			}}
        break;
        case 4 :{
        	Personne* extrait=(Personne*)extraireEnFinListe(lp);
            if(extrait!=NULL){
            	printf("Element %s %s extrait en fin de liste",extrait->nom,extrait->prenom);
			}else{printf("Liste vide");
			}}
        break;
        case 5 :{
            printf("Nom de la personne a extraire ? ");
            ch15 nom;
            scanf("%s",nom);
            Personne* cherche=creerPersonne(nom,"?");
            Personne* pp=(Personne*)chercherUnObjet(lp,cherche);
            if(extraireUnObjet(lp,pp)){
            	printf("Element %s %s extrait de la liste",pp->nom,pp->prenom);
			}}
        break;
        case 6 :
            listerListe(lp);
        break;
        case 7 :{
        	printf("Nom de la personne recherchee ? ");
            ch15 nom;
            scanf("%s",nom);
            Personne* cherche=creerPersonne(nom,"?");
            Personne* pp=(Personne*)chercherUnObjet(lp,cherche);
			if(pp!=NULL){
				printf("%s %s trouvee dans la liste \n",pp->nom,pp->prenom);
			}else{printf("%s inconnue dans la liste\n",nom);
			}}
        break;
        case 8 :
            detruireListe(lp);
        break;
        
}	}}
