#include <stdio.h>
#include <stdlib.h>
#include "include/phone_directory.h"
int main()
{
personne *rep=init_rep();
num_sais num ;
int cmt ,rt ,x,nb;
test *tab ;
while(1){
        if(x!=7 && x!=2 && x!=4 && x!=8){
        printf("\n\n-----------------------------------------MENU:------------------------------------------------\n\n");
printf("\n\t  1. Ajouter un nouveau personne dans le repertoire .\n");
printf("\n\t  2. Le nombre de personne memorises dans le repertoire .\n");
printf("\n\t  3. Recherche d'un numero de telephone avec l'affichage de nom de personne . \n");
printf("\n\t  4. Le nombre d'occurrences d'apparition du meme numero de telephone .\n");
printf("\n\t  5. Suppression du premier apparition d'un numero de telephone du repertoire .\n");
printf("\n\t  6. Suppression du deuxieme apparition d'un numero de telephone du repertoire .\n");
printf("\n\t  7. Suppression de tous les doublons d'un numero de telephone  dans le repertoire .\n");
printf("\n\t  8. Affichage des elements du repertoire .\n");
printf("\n\t  9. Quitter . \n");
printf("----------------------------------------------------------------------------------------------------\n\n");
        }
 printf("\n \n-->Veuillez saisir un numero a partir de MENU (1,2,...,8,9) :");
 scanf("%d",&x);
 printf("\n\n");
  switch(x){
    case 1:
        if(i<100)
        rep=ajout_num(rep);
        else
        printf("\n\n-----------------<...(-_-)!! Choix Invalide : la taille maximale du repertoire a ete depasse ...>-------------------\n");

    break;
    case 2:
    if(i==0)
     printf("-----------------<...(-_-) !!: Auccune personne memorises dans le repertoire ...>-------------------");
    else
    printf("\n-------------<...(^_^) : Nombre de  personne memorises dans le repertoire est : %d   ...>---------------\n",taille());

    break;
    case 3:
       if(i==0){
     printf("-----------------<...(-_-) !!: Auccune personne memorises dans le repertoire ...>-------------------");
     continue ;
  }
    printf("\n --> Saisir  le nombre de chiffres du numero de telephone du personne a recherche (! sans l'exclusion d'un chiffre !) : ");
    scanf("%d",&num.nbr_chiff) ;
    num.numero=malloc(num.nbr_chiff*sizeof(int)) ;

    printf("\n --> Veuillez saisir le numero de telephone du personne a recherche qui doit ne depasse %d chiffres , \n \t !! (^-^)-->(saisir chiffre par chiffre) !! : \n",num.nbr_chiff);
    for (int j=0 ;j<num.nbr_chiff ;j++){
    printf(" --> Le chiffre %d : ",j+1);
    scanf("%d",&num.numero[j]) ;
    }
    affich_nom(rep,num);
        break;
    case 4:
         if(i==0){
     printf("-----------------<...(-_-) !!: Auccune personne memorises dans le repertoire ...>-------------------");
     continue ;
  }
     printf("\n --> Saisir  le nombre de chiffres du numero de telephone du personne a recherche (! sans l'exclusion d'un chiffre !) : ");
    scanf("%d",&num.nbr_chiff) ;
    num.numero=malloc(num.nbr_chiff*sizeof(int)) ;

    printf("\n --> Veuillez saisir le numero de telephone du personne a recherche qui doit ne depasse %d chiffres , \n \t !! (^-^)-->(saisir chiffre par chiffre) !! : \n",num.nbr_chiff);
    for (int j=0 ;j<num.nbr_chiff ;j++){
    printf(" --> Le chiffre %d : ",j+1);
    scanf("%d",&num.numero[j]) ;
    }
        tab=nb_occ_numero(rep,num,&cmt) ;
        if(cmt==0)
    printf("\n\n----------<... (-_-) !! : Ce numero de telephone n'existe pas dans le repertoire( Nombre d'occurrences = 0 ) ...>-------------\n \n ") ;
            else
       printf("-------------<...(^_^) : Le nombre d'occurrences d'apparition du meme numero de telephone est : %d ...>---------------\n\n",cmt);

    break;
    case 5:
         if(i==0){
     printf("-----------------<...(-_-) !!: Auccune personne memorises dans le repertoire pour le supprimer ...>-------------------");
     continue ;
  }
    printf("\n --> Saisir  le nombre de chiffres du numero de telephone du personne a recherche (! sans l'exclusion d'un chiffre !) : ");
    scanf("%d",&num.nbr_chiff) ;
    num.numero=malloc(num.nbr_chiff*sizeof(int)) ;

    printf("\n --> Veuillez saisir le numero de telephone du personne a recherche qui doit ne depasse %d chiffres  , \n \t !! (^-^)-->(saisir chiffre par chiffre) !! : \n",num.nbr_chiff);
    for (int j=0 ;j<num.nbr_chiff ;j++){
    printf(" --> Le chiffre %d : ",j+1);
    scanf("%d",&num.numero[j]) ;
    }

    rt =indice_num(rep,num) ;
    if(rt ==-1 ){
        printf("\n\n----------<... (-_-) !! :  Ce numero de telephone n'existe pas dans le repertoire ...>-------------\n \n  ") ;
         continue ;
    }
    rep=suppreme_element(rep,rt) ;
     printf("--------------<...(^_^) : Suppression avec succes ...>---------------");
    break;
    case 6:
           if(i==0){
     printf("-----------------<...(-_-) !!: Auccune personne memorises dans le repertoire pour le supprimer ...>-------------------");
     continue ;
  }
      printf("\n --> Saisir  le nombre de chiffres du numero de telephone du personne a recherche (! sans l'exclusion d'un chiffre !) : ");
    scanf("%d",&num.nbr_chiff) ;
    num.numero=malloc(num.nbr_chiff*sizeof(int)) ;

    printf("\n --> Veuillez saisir le numero de telephone du personne a recherche qui doit ne depasse %d chiffres , \n \t !! (^-^)-->(saisir chiffre par chiffre) !! : \n",num.nbr_chiff);
    for (int j=0 ;j<num.nbr_chiff ;j++){
    printf(" --> Le chiffre %d : ",j+1);
    scanf("%d",&num.numero[j]) ;
    }

    rt =indice_num(rep,num) ;
    if(rt ==-1 ){
        printf("\n\n----------<... (-_-) !! :  Ce numero de telephone n'existe pas dans le repertoire ...>-------------\n \n  ") ;
        continue ;
    }
    tab=nb_occ_numero(rep,num,&cmt) ;
        if(cmt>1){
            rep=suppreme_2_apparition(rep,tab[1].indice) ;
          printf("--------------<...(^_^) : Suppression avec succes ...>---------------");
        }
        else
        printf("\n\n----------<... (-_-) !! : Ce numero de telephone n'apparit pas deux fois  dans le repertoire ...>-------------\n \n  ") ;

    break;

     case 7:
            if(i==0){
     printf("-----------------<...(-_-) !!: Auccune personne memorises dans le repertoire pour le supprimer ...>-------------------");
     continue ;
  }
          printf("\n --> Saisir  le nombre de chiffres du numero de telephone du personne a recherche (! sans l'exclusion d'un chiffre !) : ");
    scanf("%d",&num.nbr_chiff) ;
    num.numero=malloc(num.nbr_chiff*sizeof(int)) ;

    printf("\n --> Veuillez saisir le numero de telephone du personne a recherche qui doit ne depasse %d chiffres , \n \t !! (^-^)-->(saisir chiffre par chiffre) !! : \n",num.nbr_chiff);
    for (int j=0 ;j<num.nbr_chiff ;j++){
    printf(" --> Le chiffre %d : ",j+1);
    scanf("%d",&num.numero[j]) ;
    }
    int rt =indice_num(rep,num) ;
    if(rt ==-1 ){
    printf("\n\n----------<... (-_-) !! :  Ce numero de telephone n'existe pas dans le repertoire ...>-------------\n \n  ") ;
        continue ;
    }

        Suppreme_Doublons(rep,num);
        printf("--------------<...(^_^) : Suppression avec succes de tous les doublons...>---------------");
    break;

    case 8:
      if(rep!=NULL && i>0)
        affichage_rep(rep) ;
      if(i==0)
        printf("\n\n----------<... (-_-) !! :  Le repertoire est vide ...>-------------\n \n  ") ;

    break;
    case 9:printf("\n ------------------------<...(^_^) : Au Revoir ! ...>----------------------------\n") ;
                return 0;
    break;
    default :printf("\n (-_-)-->Ce numero n'existe pas dans le MENU ,Veuilez reessayer .\n\n") ;
  }

}
 return 0;
}
