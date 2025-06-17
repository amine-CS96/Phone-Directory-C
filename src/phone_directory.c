#include <stdio.h>
#include <stdlib.h>
#include "include/phone_directory.h"
#define TMAX 100

int i =0 ;

personne * init_rep(){
  personne * rep = malloc(TMAX*sizeof(personne));
if (rep == NULL){
    printf("\n\n -->EREUR d'allocation \n") ;
    exit(0);
}
return rep ;
}


personne * ajout_num(personne * rep){

    printf("\n-----------------<...Saisir  les informations du personne (%d) : ...>------------------ \n",i+1);
    printf("\n --> Veuillez saisir  le nom du personne  : ");
    scanf(" %[^\n]s",&rep[i].nom) ;
    printf("\n --> Saisir  nombre de chiffres du numero de telephone en fonction de region du personne (! sans l'exclusion d'un chiffre !) : ");
    scanf("%d",&rep[i].nbr_Chiffre);
    rep[i].numero=malloc(rep[i].nbr_Chiffre*sizeof(int));
    printf("\n --> Veuillez saisir  numero de telephone du personne qui doit ne depasse pas %d chiffres , \n \t !! (^-^)-->(saisir chiffre par chiffre) !! : \n",rep[i].nbr_Chiffre);
    for (int j=0 ;j<rep[i].nbr_Chiffre ;j++){
    printf(" --> Le chiffre %d : ",j+1);
    scanf("%d",&rep[i].numero[j]) ;
    }

i++ ;
return rep ;
}
int taille(){
return i ;
}
int indice_num(personne * rep, num_sais num){
int k ;
    for (int j=0 ;j<i ;j++){
      if(num.nbr_chiff==rep[j].nbr_Chiffre){
        for (k=0 ;k<rep[j].nbr_Chiffre ;k++){
             if(rep[j].numero[k]!=num.numero[k]){
              break ;
             }
        }

        }
if(k==rep[j].nbr_Chiffre)
        return j ;

}
return -1 ;
}
void affich_nom(personne * rep,num_sais num )
{
   int rt =indice_num(rep,num) ;
    if(rt ==-1 ){
        printf("\n\n----------<... (-_-) !! : ---> Ce numero de telephone n'existe pas dans le repertoire ...>-------------\n \n  ") ;
        return ;
    }
    else
        printf("\n\n (^_^)-->Ce numero de telephone d'un personne est existe dans le repertoire , Voici son nom : %s \n\n",rep[rt].nom);
}
test  * nb_occ_numero(personne * rep,num_sais num, int *cmt){
int k,l=0 ;
test * tab ;
tab = malloc(i*sizeof(test));
if (tab == NULL){
    printf("\n\n -->EREUR d'allocation \n") ;
    exit(0);
}
*cmt =0 ;
    for (int j=0 ;j<i ;j++){
    if(num.nbr_chiff==rep[j].nbr_Chiffre){
        for ( k=0 ;k<rep[j].nbr_Chiffre;k++){
             if(rep[j].numero[k]!=num.numero[k]){
                break;
             }
        }

    }
        if(k==rep[j].nbr_Chiffre){
            (*cmt)++;
            tab[l++].indice=j ;
         }

    }
return tab ;
}
personne * suppreme_element(personne * rep ,int x){


for(int j=x ;j<i-1 ;j++){
          rep[j]= rep[j+1];
        }
i-- ;
rep=realloc(rep,i*sizeof(personne)) ;
  return rep  ;
 }

 personne * suppreme_2_apparition(personne * rep ,int x2){

 rep=suppreme_element(rep,x2) ;

  return rep  ;
 }

 personne * suppreme_apparition(personne * rep ,int cmt,test *tab){
int  k;

     for( k=2 ;k<cmt ;k++){
        rep=suppreme_element(rep,tab[k].indice-k) ;
     }

  return rep  ;
 }

personne * Suppreme_Doublons(personne * rep ,num_sais num){

 int cmt ;
test * tab = nb_occ_numero(rep,num,&cmt) ;

   if(cmt==1){
    rep=suppreme_element(rep,tab[0].indice) ;
    return rep ;
   }
   else if(cmt>1){
    rep=suppreme_element(rep,tab[0].indice) ;
    rep=suppreme_2_apparition(rep,tab[1].indice-1) ;
    if(cmt>2)
        rep=suppreme_apparition(rep,cmt,tab);

   }

return rep ;
}
void affichage_rep(personne *rep){
    int k=0 ;
    while(k<i){
  printf("\n\n--------------------<... les informations du personne (%d) sont : ...>--------------------- ",k+1);
    printf("\n --> Le nom du personne : %s ",rep[k].nom);
    printf("\n --> Le numero de telephone du personne : ");
    for (int j=0;j<rep[k].nbr_Chiffre ;j++)
    printf("%d",rep[k].numero[j]);
    printf("\n") ;
    printf("\n--------------------------------------------------------------------------------------------\n\n");
    k++ ;
    }
}

