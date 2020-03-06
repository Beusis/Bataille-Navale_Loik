#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <math.h>

int choix;

#pragma set_character_execution

void accent () {
    SetConsoleOutputCP(65001);
}

void pause () {
    system("pause");
}

void afficherMenu () {
    printf("          <----Bataille Navale---->\n\n\n\n\n\n");
    printf("          1 - Jouer\n");
    printf("          2 - Aide\n");
    printf("          3 - HighScore\n");
    printf("          4 - Quitter\n");
    scanf("%d", &choix);
}

void clear () {
    system("cls");
}

void menu () {
    do {
        switch (choix) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                clear();
                break;
        }
    } while (choix != 4);

}
int main() {

    accent();

    afficherMenu();

    menu();

    pause();

    return 0;
}
