#include <stdio.h>
#include <stdlib.h>
int nbr,i ;
int T[nbr];
void moyenne {
    int T[nbr];
    int s=0;
    for(i=0;i<nbr;i++){
        s=s+T[i];
    }
  void plus_basse {
      int x ;
      x=T[0];
      for(i=0;i<nbr;i++){
     if (x>T[i])
        printf("le nembre plus est %d",&x);
  }
  else {
    T[i]=x
    printf("le nembre basse est %d",x)
  }

}
void total {
for(i=0;i<nbr;i++) {
if (T[i]>moyenne){
    printf(" les total superieures a moyenne est %d",T[i])
}
}
}
void valide {
    int x=0 ;
 for(i=0;i<nbr;i++){
    if (T[i]>=12){
            x=x+1
        printf(" nombre etudiant validi %d",i)
    }
 }
}
void rattrapage {
    int x=0 ;
 for(i=0;i<nbr;i++){
    if (T[i]>=12){
            x=x+1
        printf(" nombre etudiant rattrapage %d",i)
    }
 }
}
int main()
{  int nbr ,i ;
   int T[i];
    printf("combien d'etudiant y a-t-il ?");
     scanf("%d",&nbr);
     for (i=0;i<nbr;i++){
     printf("entrer la note de l'etudiant %d",i)
      scanf("%d",T[i]);
     }
      }

    do{
    int c ;
   printf("gestion des notes\n");
   printf(" [1] : pour calculer le moyenne des notes\n");
   printf(" [2] : trouver les note la plus elevee et la plus basse\n");
   printf(" [3] : pour Afficher toutes les notes superieures a la moyyenne\n");
   printf(" [4] : pour Compter le nombre d'etudiants ayant valide\n ");
   printf(" [5] : pour Compter le nombre d'etudiants en ratrapage\n" );
   printf(" [6] : pour Exetee le progreme\n\n" );
   printf("entrer votre choix");
   scanf("%d",c)
   if (c>=0&&c<=6){
    switch(c){
       case 1 : moyenne()
         break;
       case 2 : plus_basse()
         break;
       case 3 ;  total()
         break;
       case 4 : valide()
         break;
       case 5 : rattrapage()
         break;
       case 6 :printf(" Au revoui")
         break;

    }


   }
    }while(c!=6)


    return 0;
}
