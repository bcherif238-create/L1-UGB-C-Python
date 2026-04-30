#include <stdio.h>
#include <stdlib.h>
#define TAUX 0.09

int main()
{
    int age;
    float somme,remboursement,taux;
    char etudiant,Grand_Ecole;

    do{
       printf("Quelle est la somme que vous voulez emptunter: ");
       scanf("%f",&somme);
    }while(somme<=0);
    do{
       printf("Vous a avez quel age: ");
       scanf("%d",&age);
    }while(age<=0 || age>120);

    if(age<18){
       printf("Vous n'avez pas droit au pret.\n\tBonne journee!\n ");
       return 0;
    }
    printf("Etes-vous etudiant (O/N)): ");
    scanf(" %c",&etudiant);
    printf("Etes-vous dans une grande ecole (O/N): ");
    scanf(" %c",&Grand_Ecole);

    taux=TAUX;
    if((age>=18 && age<=25) || (etudiant=='O' && age<30))
       taux=taux-0.02;
    if(Grand_Ecole=='O')
       taux=taux-0.01;

    remboursement=somme+(somme*taux);

    printf("Le taux de votre pret s'eleve a: %.2f.\n",taux);
    printf("La somme a payer est : %.2f.\n",remboursement);
    printf("\tNous sommes ravis de faire affaire avec vous.\n");


    return 0;
}








