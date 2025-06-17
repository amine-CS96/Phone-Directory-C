#ifndef DIRECTORY_H_INCLUDED
#define DIRECTORY_H_INCLUDED
typedef struct personne {
char nom[66];
int *numero ;
int nbr_Chiffre;
}personne;

typedef struct test{
int indice ;
}test;
typedef struct num_sais{
int nbr_chiff ;
int *numero ;
}num_sais;

extern int i ;
extern personne * init_rep();
extern personne * ajout_num(personne * rep) ;
extern int indice_num(personne * rep,num_sais num) ;
extern void affich_nom(personne * rep,num_sais num ) ;
extern test  * nb_occ_numero(personne * rep,num_sais num, int *cmt) ;
extern personne * suppreme_element(personne * rep ,int x) ;
extern personne * suppreme_2_apparition(personne * rep ,int x2) ;
extern personne * suppreme_apparition(personne * rep ,int cmt,test *tab) ;
extern personne * Suppreme_Doublons(personne * rep ,num_sais num) ;
extern void affichage_rep(personne *rep) ;
#endif // DIRECTORY_H_INCLUDED
