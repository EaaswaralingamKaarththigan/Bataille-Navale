#include <stdio.h>
#include <windows.h>

#define MOYENBATEAU 3
#define PETITBATEAU 2
#define GRANDBATEAU 5
int bateau3 = 0, bateau1 = 0, bateau2 = 0, bateau4 = 0, bateau5 = 0, bateau6 = 0;

char tableau [8][8]={
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
        '-','-','-','-','-','-','-','-',
};

int tableau3 [8][8]={
        3,0,0,2,2,0,0,0,                         // 3: 3 parties
        3,0,0,0,0,0,0,0,                         // 4: 3 parties
        3,0,5,5,5,5,5,0,                         // 1: 2 parties
        0,0,0,0,0,0,0,0,                         // 2: 2 parties
        0,0,0,0,0,0,0,0,                         // 6: 2 parties
        0,0,0,0,0,1,1,0,
        0,4,4,4,0,0,0,0,
        0,0,0,0,0,6,6,0
};

int menu = 0,x, tableauachoix, ligne, jouer, aide, score, quitter, liste, colonne, choixcol, menujouer, choixligne, col, lig, pointdevie = 0;
char nom;
char prenom;



int bienvenue(){

    printf("======================================================\n");
    printf("-----Bienvenue dans le menu de la Bataille Navale-----\n");
    printf("======================================================\n\n\n");
    system("pause");
    system("cls");

}                                               // Le message de bienvenue aux joueurs

int commencer() {

    printf("\n");                                                       // la grille sur laquelle les joueurs jouent
    for (ligne = 0; ligne < 8; ligne++) {
        for (colonne = 0; colonne < 8; colonne++) {
            printf("|%c", tableau[ligne][colonne]);
        }
        printf("|\n");
    }
    printf("\n");

    while (pointdevie <= 17) {
        printf("\nVeuillez choisir une ligne :\n\n");                     // choix ligne
        scanf("%d", &choixligne);
        printf("\nVeuillez choisir une colonne :\n\n");                   // choix colonne
        scanf("%d", &choixcol);
        choixligne = choixligne - 1;
        choixcol = choixcol - 1;

        if(choixligne >8){
            printf("Choisissez un numero valable !!!\n\n");
        }
        if(choixcol >8){
            printf("Choisissez un numero valable !!!\n\n");
        }

        if(tableau3[choixligne][choixcol] == 10){
            printf("\n\nTu as deja touche ce bateau\n\n");
        }
        else if(tableau3[choixligne][choixcol] == 11){
            printf("\n\nTu as deja tire ici\n\n");
        }

        if (tableau3[choixligne][choixcol]==3) {
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
                printf("coule");
            }
        }

        if(pointdevie >= 3){
            printf("\n\nGAGNER");
            system("pause");
            for (int i = 0; i <8 ; ++i) {
                printf("\n");
                for (int j = 0; j < 8; ++j) {
                    tableau[i][j]=*"-";

                }

            }

            intro();
        }


        else if (tableau3[choixligne][choixcol]==0){
            tableau[choixligne][choixcol] = *"O";
            tableau3[choixligne][choixcol] = 11;
            printf("loupe");


        }
        tableauAffiche();
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

    printf("1-Commencer\n");
    printf("2-Grille\n");
    printf("3-Retour\n");
    scanf("%d", &menujouer);
    system("cls");

    switch(menujouer){
        case 1:
            commencer();
            break;

        case 2:
            grille();
            break;
        case 3:break;
    }
}                                           // Les différentes option de sous-menu "jouer"

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
            printf("Aide");
            break;

        case 3:
            printf("Score");
            break;

        case 4:
            printf("Quitter");
            break;
    }

}                                                // Le sous-menu

int intro(){                                                       // Le menu

    printf("Choisissez un numero de la liste ci-dessous :\n\n\n");


    printf("1.- Jouer\n");
    printf("2.- Aide\n");
    printf("3.- Score\n");
    printf("4.- Quitter\n");
    scanf("%d", &menu);
    system("cls");

    sousmenu();

}
void tableauAffiche(){
    printf("\n");
    for (ligne = 0; ligne < 8; ligne++) {
        for (colonne = 0; colonne < 8; colonne++) {
            printf("|%c", tableau[ligne][colonne]);
        }
        printf("|\n");
    }
    printf("\n");

}




int main() {

    bienvenue();
    intro();

    return 0;
}

