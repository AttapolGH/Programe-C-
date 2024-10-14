#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>

#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
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

main() {
    int score[169], i, num_students;

    system("cls");
    resetcolor();

        textcolor(GREEN, BLACK);
        printf("\n========== Program Tud Grade ==========\n");
        resetcolor();  

    do {
        textcolor(CYAN, BLACK);
        printf("\nEnter number of students (1-169): ");              // input number?
        resetcolor();
        scanf("%d", &num_students);

       
    if (num_students < 1 || num_students > 169) {
        textcolor(RED, BLACK);
        printf("   Error: Please enter (1-169) !! ");
        resetcolor();
        }
    }while (num_students < 1 || num_students > 169);  

    for(i = 1; i <= num_students; i++) {textcolor(YELLOW, BLACK);
        printf("\nEnter Score of number %d ==> ", i);                // input score?
        resetcolor();
        scanf("%d", &score[i]);
    }
        s:
        textcolor(BLUE, BLACK);
        printf("\nEnter Score of number (1-%d) >>> ", num_students); 
        resetcolor();
        scanf("%d", &i); 
    
    if (i > num_students || i <= 0) {
        textcolor(RED, BLACK);
        printf("\nError: Enter number (1 - %d) !!", num_students);   // error number
        resetcolor();
        goto s;
    }
       
    if ((score[i] >= 80) && (score[i] <= 100)) {                     // output score
        textcolor(GREEN, BLACK);  
        printf("Score of number %d = Grade A \n", i);
    }
    else if ((score[i] >= 70) && (score[i] <= 79)) {
        textcolor(BLUE, BLACK);  
        printf("Score of number %d = Grade B \n", i);
    }
    else if ((score[i] >= 60) && (score[i] <= 69)) {
        textcolor(YELLOW, BLACK);  
        printf("Score of number %d = Grade C \n", i);
    }
    else if ((score[i] >= 50) && (score[i] <= 59)) {
        textcolor(AQUA, BLACK); 
        printf("Score of number %d = Grade D \n", i);
    }
    else if ((score[i] >= 0) &&  (score[i] <= 49)) {
        textcolor(RED, BLACK); 
        printf("Score of number %d = Grade F \n", i);
    }
    else {
        textcolor(RED, BLACK);  
        printf("Score of number %d Error ", i);
    }
    resetcolor();
    getch();
    goto s;
}

