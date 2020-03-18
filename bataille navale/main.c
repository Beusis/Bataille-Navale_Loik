#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <math.h>

int choix, coordonnéesY;
char coordonnéesX;

#define MAP_X 9
#define MAP_Y 9

#define MAP {\
{0, 0, 0, 0, 2, 0, 2, 0, 0, 0},\
{0, 0, 0, 1, 2, 0, 2, 0, 0, 0},\
{0, 1, 0, 1, 0, 0, 2, 0, 0, 2},\
{0, 1, 0, 1, 0, 0, 0, 0, 0, 2},\
{0, 1, 0, 1, 0, 1, 1, 1, 0, 2},\
{2, 0, 2, 2, 2, 0, 0, 0, 0, 2},\
{2, 0, 0, 0, 0, 0, 0, 0, 0, 2},\
{2, 0, 1, 1, 1, 1, 1, 0, 0, 0},\
{2, 0, 0, 0, 0, 0, 0, 0, 1, 0},\
{0, 0, 0, 0, 0, 0, 0, 0, 1, 0}\
}

int map[MAP_Y][MAP_X] = MAP;
#pragma set_character_execution

void accent () {
    SetConsoleOutputCP(65001);
}

void pause () {
    system("pause");
}

void afficherMenu () {
    printf("          <----Bataille Navale---->\n\n\n\n\n\n");
    printf("               1 - Jouer\n");
    printf("               2 - Aide\n");
    printf("               3 - HighScore\n");
    printf("               4 - Quitter\n");
    scanf("%d", &choix);
}

void clear () {
    system("cls");
}

void aide () {
    printf("               Aide\n\n");
    printf("  Il y a 5 bateaux dans la carte\n");
    printf("     1 porte-avions (5 cases)\n");
    printf("       1 croiseur (4 cases)\n");
    printf("   2 contre-torpilleurs (3 cases)\n");
    printf("       1 torpilleur (2 cases)\n\n");
    printf("Il faut tirer des obus dans la carte pour toucher les bateaux\n");
}

void afficherMap() {
    printf("     A  B  C  D  E  F  G  H  I  J\n");

    for (int i = 0, b = 0; i < 10, b < 10; i++, b++) {
        printf(" %d ", b);
        for (int a = 0; a < 10; a++) {
            printf("[ ]");
        }
        printf("\n");
    }
    printf("\n\nEntrer la coordonnées X (A, B, etc)\n");
    scanf("%c", coordonnéesX);
    printf("Entrer la coordonnées Y (1, 2, etc)");
    scanf("%d", coordonnéesY);
}

void menu () {
    do {
        switch (choix) {
            case 1:
                clear();
                afficherMap();
                break;
            case 2:
                clear();
                aide();
                pause();
                choix = 0;
                clear();
                afficherMenu();
                break;
            case 3:
                break;
            case 4:
                pause();
                break;
            default:
                printf("non disponible");
        }
    } while (choix != 4);

}
int main() {

    accent();

    afficherMenu();

    menu();

    return 0;
}
