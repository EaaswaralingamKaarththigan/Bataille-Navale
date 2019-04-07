//Titre : Bataille Navale
//Auteur : Eaaswaralingam Kaarththigan
//Version : 1.0
//Date : 07.04.2019


#include <stdio.h>
#include <windows.h>
#include "Grille.h"

int bateau3 = 0, bateau1 = 0, bateau2 = 0, bateau4 = 0, bateau5 = 0, bateau6 = 0;



int menu = 0,x, tableauachoix, ligne, jouer, score, quitter, liste, colonne, choixcol, menujouer, choixligne, col, lig, pointdevie = 0, scorecoup = 0, scorefinal, choixgrille;
char nom;
char prenom;
int $monfichier;



int grille3(){
    tableauAffiche();

    while (pointdevie <= 17) {

        printf("\nVeuillez choisir une ligne :\n\n");                     // choix ligne
        scanf("%d", &choixligne);
        printf("\nVeuillez choisir une colonne :\n\n");                   // choix colonne
        scanf("%d", &choixcol);
        scorecoup++;
        choixligne = choixligne - 1;
        choixcol = choixcol - 1;



        if(choixligne >7 || choixcol>7){
            printf("Choisissez un numero valable !!!\n\n");
        }


        if(tableau4[choixligne][choixcol] == 10){
            printf("\n\nTu as deja touche ce bateau\n\n");
        }
        else if(tableau4[choixligne][choixcol] == 11){
            printf("\n\nTu as deja tire ici\n\n");
        }

        if (tableau4[choixligne][choixcol]==3) {
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau4[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol] = *"X";
            bateau3++;
            if (bateau3 == 3) {
                printf("coule");
            }
        }
        else if (tableau4[choixligne][choixcol]==1){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau4[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau2++;
            if (bateau2 == 2){
                printf("coule");
            }
        }
        else if (tableau4[choixligne][choixcol]==2){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau4[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau1++;
            if (bateau1 == 2){
                printf("coule");
            }
        }
        else if (tableau4[choixligne][choixcol]==4){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau4[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau4++;
            if (bateau4 == 3){
                printf("coule");
            }
        }
        else if (tableau4[choixligne][choixcol]==5){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau4[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau5++;
            if (bateau5 == 5){
                printf("coule");
            }
        }
        else if (tableau4[choixligne][choixcol]==6){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau4[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau6++;
            if (bateau6 == 2){
                printf("Vous avez coule un bateau");
                tableauAffiche();
            }
        }

        if(pointdevie >= 17){
            for (int i = 0; i <8 ; ++i) {
                for (int j = 0; j < 8; ++j) {
                    tableau4[i][j]=tableaumodel4[i][j];
                }
            }

            tableauAffiche();

            printf("\n\nGAGNER\n\n");
            stockerScore();
            scorecoup = 0;
            system("pause");
            for (int i = 0; i <8 ; ++i) {
                printf("\n");
                for (int j = 0; j < 8; ++j) {
                    tableau[i][j]=*"-";
                    pointdevie = 0;
                    bateau3 = 0;
                    bateau1 = 0;
                    bateau4 = 0;
                    bateau5 = 0;
                    bateau6 = 0;
                    bateau2 = 0;
                }

            }
            intro();

        }


        else if (tableau3[choixligne][choixcol]==9){
            tableau[choixligne][choixcol] = *"O";
            tableau3[choixligne][choixcol] = 11;
            printf("loupe");


        }
        tableauAffiche();

    }
}           //grille 3

int grille2(){
    tableauAffiche();

    while (pointdevie <= 17) {

        printf("\nVeuillez choisir une ligne :\n\n");                     // choix ligne
        scanf("%d", &choixligne);
        printf("\nVeuillez choisir une colonne :\n\n");                   // choix colonne
        scanf("%d", &choixcol);
        scorecoup++;
        choixligne = choixligne - 1;
        choixcol = choixcol - 1;



        if(choixligne >7 || choixcol>7){
            printf("Choisissez un numero valable !!!\n\n");
        }


        if(tableau2[choixligne][choixcol] == 10){
            printf("\n\nTu as deja touche ce bateau\n\n");
        }
        else if(tableau2[choixligne][choixcol] == 11){
            printf("\n\nTu as deja tire ici\n\n");
        }

        if (tableau2[choixligne][choixcol]==3) {
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau2[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol] = *"X";
            bateau3++;
            if (bateau3 == 3) {
                printf("coule");
            }
        }
        else if (tableau2[choixligne][choixcol]==1){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau2[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau2++;
            if (bateau2 == 2){
                printf("coule");
            }
        }
        else if (tableau2[choixligne][choixcol]==2){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau2[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau1++;
            if (bateau1 == 2){
                printf("coule");
            }
        }
        else if (tableau2[choixligne][choixcol]==4){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau2[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau4++;
            if (bateau4 == 3){
                printf("coule");
            }
        }
        else if (tableau2[choixligne][choixcol]==5){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau2[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau5++;
            if (bateau5 == 5){
                printf("coule");
            }
        }
        else if (tableau2[choixligne][choixcol]==6){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau2[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau6++;
            if (bateau6 == 2){
                printf("Vous avez coule un bateau");
                tableauAffiche();
            }
        }

        if(pointdevie >= 17){
            for (int i = 0; i <8 ; ++i) {
                for (int j = 0; j < 8; ++j) {
                    tableau2[i][j]=tableaumodel2[i][j];
                }
            }

            tableauAffiche();

            printf("\n\nGAGNER\n\n");
            stockerScore();
            scorecoup = 0;
            system("pause");
            for (int i = 0; i <8 ; ++i) {
                printf("\n");
                for (int j = 0; j < 8; ++j) {
                    tableau[i][j]=*"-";
                    pointdevie = 0;
                    bateau3 = 0;
                    bateau1 = 0;
                    bateau4 = 0;
                    bateau5 = 0;
                    bateau6 = 0;
                    bateau2 = 0;
                }

            }
            intro();

        }


        else if (tableau2[choixligne][choixcol]==9){
            tableau[choixligne][choixcol] = *"O";
            tableau3[choixligne][choixcol] = 11;
            printf("loupe");


        }
        tableauAffiche();

    }

}           //grille 2

int grille1(){              //grille 1

    tableauAffiche();

    while (pointdevie <= 17) {

        printf("\nVeuillez choisir une ligne :\n\n");                     // choix ligne
        scanf("%d", &choixligne);
        printf("\nVeuillez choisir une colonne :\n\n");                   // choix colonne
        scanf("%d", &choixcol);
        scorecoup++;
        choixligne = choixligne - 1;
        choixcol = choixcol - 1;



        if(choixligne >7 || choixcol>7){                                // Ne valide pas le numero qu'on a insere
            printf("Choisissez un numero valable !!!\n\n");
        }


        if(tableau3[choixligne][choixcol] == 10){                       // deja touché
            printf("\n\nTu as deja touche ce bateau\n\n");
        }
        else if(tableau3[choixligne][choixcol] == 11){                  // deja tire
            printf("\n\nTu as deja tire ici\n\n");
        }

        if (tableau3[choixligne][choixcol]==3) {                        // touche
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau3[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol] = *"X";
            bateau3++;
            if (bateau3 == 3) {
                printf("coule");
            }
        }
        else if (tableau3[choixligne][choixcol]==1){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau3[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau2++;
            if (bateau2 == 2){
                printf("coule");
            }
        }
        else if (tableau3[choixligne][choixcol]==2){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau3[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau1++;
            if (bateau1 == 2){
                printf("coule");
            }
        }
        else if (tableau3[choixligne][choixcol]==4){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau3[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau4++;
            if (bateau4 == 3){
                printf("coule");
            }
        }
        else if (tableau3[choixligne][choixcol]==5){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau3[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau5++;
            if (bateau5 == 5){
                printf("coule");
            }
        }
        else if (tableau3[choixligne][choixcol]==6){
            printf("touche ");
            pointdevie = pointdevie + 1;
            tableau3[choixligne][choixcol] = 10;
            tableau[choixligne][choixcol]= *"X";
            bateau6++;
            if (bateau6 == 2){
                printf("Vous avez coule un bateau");
                tableauAffiche();
            }
        }

        if(pointdevie >= 17){                                                   // gagner
            for (int i = 0; i <8 ; ++i) {
                for (int j = 0; j < 8; ++j) {
                    tableau3[i][j]=tableaumodel[i][j];
                }
            }

            tableauAffiche();

            printf("\n\nGAGNER\n\n");
            stockerScore();
            scorecoup = 0;
            system("pause");
            for (int i = 0; i <8 ; ++i) {
                printf("\n");
                for (int j = 0; j < 8; ++j) {
                    tableau[i][j]=*"-";
                    pointdevie = 0;
                    bateau3 = 0;
                    bateau1 = 0;
                    bateau4 = 0;
                    bateau5 = 0;
                    bateau6 = 0;
                    bateau2 = 0;
                }

            }
            intro();

        }


        else if (tableau3[choixligne][choixcol]==9){                            //loupe
            tableau[choixligne][choixcol] = *"O";
            tableau3[choixligne][choixcol] = 11;
            printf("loupe");


        }
        tableauAffiche();

    }
}

int stockerScore(){                                                     //Pouvoir stocker le score
    FILE * scorefinal;

    scorefinal = fopen("Score.txt","a+");
    fprintf(scorefinal,"Capitaine : ""%s""\n",&nom);
    fprintf(scorefinal,"nombre de coups :""%d""\n\n", scorecoup);
    fclose(scorefinal);

}


int bienvenue(){                                                        //Le menu de bienvenue

    printf("======================================================\n");
    printf("-----Bienvenue dans le menu de la Bataille Navale-----\n");
    printf("======================================================\n\n\n");

    printf("Entrez votre nom : ");                                      // C'est ici que le nom du capitaine sera inséré
    scanf("%s", &nom);

    system("pause");                                                    // Le systeme demande si l'on peut continuer
    system("cls");                                                      // La suite s'affichera dans une autre fenetre

}

int aide(){
    printf("Bienvenue dans le programme : la Bataille Navale\n\n");
    printf("Voici les regles : \n");
    printf("1)Le but est de toucher tous le bâteaux places sur la grille.\nMais ce n'est pas si facile que ça car on ne voit pas les bâteaux et toute la difficulte se trouve ici.\nVous devez deviner pour gagner.\n\n");
    printf("2)Ce jeu fonctionne par score.\nC'est a dire que celui qui a reussi la bataille navale avec le moins de coups possible gagne.\nC'est comme un classement si vous le voulez.\n\n");
    printf("3)Et le point final, c'est de s'amuser a fond !!!\n\n");

    system("pause");
    system("cls");
    intro();
}                                                           // regles du jeu

int commencer() {
    
    printf("Choisissez un numero de grille ci-dessous : \n\n");

    printf("- 1 \n");
    printf("- 2 \n");
    printf("- 3 \n");
    scanf("%d", &choixgrille);
    
    switch(choixgrille){
        case 1: grille1();
                break;
        case 2: grille2();
                break;
        case 3: grille3();
                break;
    }

}


int grille(){

    printf("\n");
    for(ligne=0;ligne<8;ligne++){
        for(colonne=0;colonne<8;colonne++){
            printf("|%c", tableau[ligne][colonne]);
        }
        printf("|\n");
    }

}                                                   // La grille sur laquelle les jouers vont jouer

int sousmenujouer(){
    do{
        printf("1-Commencer\n");
        printf("2-Grille\n");
        printf("3-Retour\n");
        scanf("%d", &menujouer);
    }while(menujouer>3);
    system("cls");

    switch(menujouer){
        case 1:
            commencer();
            break;

        case 2:
            grille();
            system("pause");
            intro();
            break;
        case 3:
            sousmenu();
            break;
    }
}                                           // Les diffÃ©rentes option de sous-menu "jouer"

int sousmenu(){

    switch(menu)
    {
        default:
            printf("Choisissez un numero de la liste ci-dessous :");
            scanf("%d", &liste);
            break;

        case 1:
            sousmenujouer();
            break;

        case 2:
            aide();
            break;

        case 4:
            printf("Quitter");
            break;
    }

}                                                // Le sous-menu

int intro(){                                                       // Le menu
    do{
        printf("Choisissez un numero de la liste ci-dessous :\n\n\n");


        printf("1.- Jouer\n");
        printf("2.- Aide\n");
        printf("4.- Quitter\n");
        scanf("%d", &menu);
    }while(menu>4);
    system("cls");

    sousmenu();

}

int tableauAffiche(){                                           // grille
    printf("\n");
    printf(" ");
    for (int i = 1;i<=8;i++){
        printf("%d"" ",i);
    }
    printf("\n");
    for (ligne = 0; ligne < 8; ligne++) {
        for (colonne = 0; colonne < 8; colonne++) {
            printf("|%c", tableau[ligne][colonne]);
        }
        printf("|\n");
    }
    printf("\n");

}


int main() {                                                    // main

    bienvenue();
    intro();

    return 0;
}