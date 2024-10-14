#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void program();
void resume();
void pic();
void math();
void grade();
void rankhaw();
void exitProgram();

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
    int abc;

    while (1) {
        program();
        scanf("%d", &abc);

        switch (abc) {
            case 1:
                resume();
                break;
            case 2:
                pic();
                break;
            case 3:
                math();
                break;
            case 4:
                grade();
                break;
            case 5:
                rankhaw();
                break;
            case 0:
                exitProgram();
                break;
            default:
                printf("\nInvalid option! Try again.\n");
                getch();
        }
    }
    return 0;
}

void program() {
    system("cls");
    printf("\033[0;31m****** Program Attapol ******\n");
    printf("\033[0;33m************ Menu ************\n");
    printf("1 -- Resume\n");
    printf("2 -- Pic\n");
    printf("3 -- Math\n");
    printf("4 -- Grade\n");
    printf("5 -- Food Order\n");
    printf("0 -- Exit Program\n");
    printf("\033[0;31mEnter number == ");
}

void resume() {
    system("cls");
    printf("\033[0;36m***********************************************\033[0m\n");
    printf(" \033[0;31mName\033[0m  : \033[0;33mOattaohon Phumchai                   \033[0;36m*\033[0m\n");
    printf(" \033[0;31mID\033[0m    : \033[0;33m167205110169                         \033[0;36m*\033[0m\n");
    printf(" \033[0;31mPhone\033[0m : \033[0;33m0622706645                           \033[0;36m*\033[0m\n");
    printf(" \033[0;31mEmail\033[0m : \033[0;33mmrton512@gmail.com                   \033[0;36m*\033[0m\n");
    printf("\033[0;36m***********************************************\n");
    getch();
}

void pic() {
    const char *yellow = "\033[33m";
    const char *reset = "\033[0m";
    const char *blue = "\033[34m";
    const char *cyan = "\033[36m";

    system("cls");
    printf("\033[0m__________________________________\n");
    printf("___________%s###%s______%s*%s_____________\n", yellow, reset, blue, reset);
    printf("________%s####%s__________________%s*%s___\n", yellow, reset, blue, reset);
    printf("______%s####%s________________%s*%s_______\n", yellow, reset, blue, reset);
    printf("____%s#####%s______________%s* *_* *%s____\n", yellow, reset, blue, reset);
    printf("___%s#####%s________________%s*_*_*%s_____\n", yellow, reset, blue, reset);
    printf("__%s######%s_______________%s**   **%s____\n", yellow, reset, blue, reset);
    printf("_%s#######%s__________________________\n", yellow, reset);
    printf("_%s#######%s__________________________\n", yellow, reset);
    printf("_%s########%s_______________%s*%s_________\n", yellow, reset, blue, reset);
    printf("_%s###############%s__________________\n", yellow, reset);
    printf("_%s############%s__________%s167205110169%s\n", yellow, reset, cyan, reset);
    printf("__%s##########%s__________%sATTAPOL PUMCHAI%s\n", yellow, reset, cyan, reset);
    printf("___%s###########%s____________________\n", yellow, reset);
    printf("____%s############################%s__\n", yellow, reset);
    printf("______%s#########################%s___\n", yellow, reset);
    printf("________%s#####################%s_____\n", yellow, reset);
    printf("__________%s#################%s_______\n", yellow, reset);
    printf("______________%s#########%s___________\n", yellow, reset);
    printf("__________________________________\n");
    getch();
}

void math() {
    float price, discount = 0.0;
    int useCoupon;

    system("cls");
    printf("\033[0;34mEnter Price : ");
    scanf("%f", &price);
    printf("\033[0;33mEnter Coupon (20%% discount)\n");
    printf("\033[0;33m(Enter 0 if no coupon) : ");
    scanf("%d", &useCoupon);

    if (useCoupon == 169) {
        discount = price * 0.20;
    }

    float TotalPrice = price - discount;
    printf("\033[0;32mTotal Price : %.2f Baht \033[0m\n", TotalPrice);
    getch();
}

void grade() {
    float yourScore, midterm, finalS, totalScore;

    system("cls");
    printf("\033[0;36mEnter Your Score: ");
    scanf("%f", &yourScore);
    printf("\033[0;36mEnter Midterm Score: ");
    scanf("%f", &midterm);
    printf("\033[0;36mEnter Final Score: ");
    scanf("%f", &finalS);

    totalScore = yourScore + midterm + finalS;
    const char* grade = getGrade(totalScore);
    printf("\033[0;33mTotal Score: %.2f\n", totalScore);

    if (grade == "A") {
        printf("\033[0;32mYour Grade: %s\033[0m\n", grade);
    } else if (grade == "F") {
        printf("\033[0;31mYour Grade: %s\033[0m\n", grade);
    } else {
        printf("Your Grade: %s\n", grade);
    }
    getch();
}

void rankhaw() {
    int menu, total = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;

    while (1) {
        system("cls");
        printf("\033[0;31m**********Program Ran Khaw Kraprow**********\n");
        printf("\033[0;36m******************\033[0;33m Menu\033[0m \033[0;36m********************\n");
        printf("**  1. Kraprow Pig 50 Baht                 **\n");
        printf("**  2. Kraprow Cow 60 Baht                 **\n");
        printf("**  3. Kraprow Chicken 50 Baht             **\n");
        printf("**  4. Kraprow Fish Ink 55 Baht            **\n");
        printf("**  5. Kraprow Kung 70 Baht                **\n");
        printf("**  6. Kraprow Kung Dragon 550 Baht        **\n");
        printf("**  7. Kraprow Kung Mother Water 470 Baht  **\n");
        printf("**  8. + Egg Star 10 Baht                  **\n");
        printf("**  9. + Egg Jeaw 10 Baht                  **\n");
        printf("********************************************\n");
        printf("\033[0;31m====> 0. Pay Total\n");
        printf("\033[0;33mEnter number: ");
        scanf("%d", &menu);

        if (menu == 1) { a1++; total += 50; }
        else if (menu == 2) { a2++; total += 60; }
        else if (menu == 3) { a3++; total += 50; }
        else if (menu == 4) { a4++; total += 55; }
        else if (menu == 5) { a5++; total += 70; }
        else if (menu == 6) { a6++; total += 550; }
        else if (menu == 7) { a7++; total += 470; }
        else if (menu == 8) { a8++; total += 10; }
        else if (menu == 9) { a9++; total += 10; }
        else if (menu == 0) {
            printf("\033[0;32mTotal = %d Baht\n", total);
            printf("\033[0;33m*************** \033[0;36mOrder Summary\033[0m\033[0;33m *****************\n");
            printf("**  1. Kraprow Pig %d Jan                   **\n", a1);
            printf("**  2. Kraprow Cow %d Jan                   **\n", a2);
            printf("**  3. Kraprow Chicken %d Jan               **\n", a3);
            printf("**  4. Kraprow Fish Ink %d Jan              **\n", a4);
            printf("**  5. Kraprow Kung %d Jan                  **\n", a5);
            printf("**  6. Kraprow Kung Dragon %d Jan           **\n", a6);
            printf("**  7. Kraprow Kung Mother Water %d Jan     **\n", a7);
            printf("**  8. + Egg Star %d Jan                    **\n", a8);
            printf("**  9. + Egg Jeaw %d Jan                    **\n", a9);
            printf("********************************************\n");
            getch();
            break;
        } else {
            printf("\nInvalid option! Try again.\n");
            getch();
        }
    }
}

void exitProgram() {
    printf("\n* THANK YOU *");
    getch();
    exit(0);
}

