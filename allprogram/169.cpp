#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  
#include <windows.h>  
#include <stdbool.h>  
#define MAX_FRIENDS 5  
#define textcolor(txt) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
#define BLACK            0
#define DARKBLUE         1
#define DARKGREEN        2
#define AQUA             3
#define DARKRED          4
#define DARKVOILET       5
#define DARKYELLOW       6
#define GRAY             7
#define DARKGRAY         8
#define BLUE             9
#define GREEN           10
#define CYAN            11
#define RED             12
#define VIOLET          13
#define YELLOW          14
#define WHITE           15

void cls() { // function 1
    system("cls"); // Clear the screen
}

void lokk() { // function 2
    int choice, monitor;
    bool noteTaken = false;
    char friends[MAX_FRIENDS][20] = {"FRIENDS1", "FRIENDS2", "FRIENDS3", "FRIENDS4", "FRIENDS5"};

m:
//**************** Menu **************************************************************
    textcolor(RED); 
    printf("**** PROGRAM LOK KHO SOB ****\n");
    resetcolor();
    textcolor(YELLOW );  
    printf("1. Use Poy  \n");
    printf("2. Lok Friend ");
    resetcolor();
    printf("\nChoi (1 or 2): ");
    choice = getch() - '0'; 
    
//*********** Program 1 ***************************************************************

    if (choice == 1) {
        textcolor(CYAN);  
        printf("\n1. Use Poy\n");
        resetcolor();
        textcolor(CYAN);  
        printf("R jan check (1) R jan Notcheck (2): ");
        resetcolor();
        scanf("%d", &monitor);

        if (monitor == 1) {
            textcolor(RED);  
            printf("R jan check Notpoy!\n");
            resetcolor();
        } else {
            textcolor(GREEN);  
            printf("R jan Notcheck Usepoy!\n");
            resetcolor();
            noteTaken = true;
        }
        getch();
        cls();
        goto m; 
    } 
    
    //*********** Program 2 ***************************************************************

    else if (choice == 2) {
        textcolor(CYAN);  
        printf("2. LokFriend\n");
        resetcolor();
        textcolor(CYAN);  
        printf("LokFriend kon tee (1-%d):\n", MAX_FRIENDS);
        resetcolor();
        for (int i = 0; i < MAX_FRIENDS; i++) {
            textcolor(YELLOW);  
            printf("   %d. %s\n", i + 1, friends[i]);
            resetcolor();
        }
        textcolor(AQUA);  
        printf("Lok Friend (1-%d): ", MAX_FRIENDS);
        resetcolor();
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_FRIENDS) {
            textcolor(RED); 
            printf("Notcorect!\n");
            resetcolor();
        } else {
            textcolor(YELLOW); 
            printf("From Friend %s\n", friends[choice - 1]);
            resetcolor();
            textcolor(CYAN);  
            printf(" R jan doo (1) R jan Mai doo (2): ");
            resetcolor();
            scanf("%d", &monitor);

            switch (monitor) {
                case 1:
                    textcolor(DARKRED);  
                    printf("R jan do Nolok !\n");
                    resetcolor();
                    break;
                case 2:
                    textcolor(GREEN);  
                    printf("R jan Maidoo Lok loey %s\n", friends[choice - 1]);
                    resetcolor();
                    break;
                default:
                    textcolor(RED);  
                    printf("error!\n");
                    resetcolor();
                    break;
            }
        }
    }
}

int main() {
    int repeat;
    do {
        cls(); 
        lokk();
        textcolor(YELLOW);  
        printf("\nDo you want to try again (1 = yes, 0 = no): ");
        resetcolor();
        repeat = getch() - '0';
    } while (repeat == 1);

    return 0;
}

