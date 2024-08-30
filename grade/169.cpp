#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

const char* getGrade(float totalScore) {
    if (totalScore >= 80) {
        return "A"; 
    } else if (totalScore >= 75) {
        return "B+";
    } else if (totalScore >= 70) {
        return "B";
    } else if (totalScore >= 65) {
        return "C+";
    } else if (totalScore >= 60) {
        return "C";
    } else if (totalScore >= 55) {
        return "D+";
    } else if (totalScore >= 50) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    while (1) {  
        float yourScore, midterm, finalS, totalScore;

        printf("\033[0;36mEnter Your Score: ");
        scanf("%f", &yourScore);
        
        printf("\033[0;36mEnter midterm: ");
        scanf("%f", &midterm);
        
        printf("\033[0;36mEnter final: ");
        scanf("%f", &finalS);
        
        totalScore = yourScore + midterm + finalS;
        const char* grade = getGrade(totalScore);
        
        printf("\033[0;33mTotal Score: %.2f\n", totalScore);
        
        if (grade == "A") {
            printf("\033[0;32mYour grade: %s\033[0m\n", grade); // A green
        } else if (grade == "F") {
            printf("\033[0;31mYour grade: %s\033[0m\n", grade); // F red
        } else {
            printf("Your grade: %s\n", grade); // No color 
        }
        
        getch();
        system("cls");
    }
    
    return 0;
}

