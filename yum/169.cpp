#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

    const char* getGrade(float totalScore) { // case 4
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
    
    c:
    system("cls");
    printf("\033[0;31m****** Program Attapol ******\n");
    printf("\033[0;33m************Menu ************");
    printf("\n1 -- Resume");
    printf("\n2 -- Pic");
    printf("\n3 -- Math");
    printf("\n4 -- Grade");
    printf("\n5 -- Food Order");
    printf("\n0 -- Exit Program \n");
    printf("\033[0;31mEnter number == ");
    scanf("%d", &abc);
	
	switch(abc) {
		case 1:{
		
			system("cls");
			printf("\033[0;36m***********************************************\033[0m\n");
    	    printf(" \033[0;31mName\033[0m  : \033[0;33mOattaohon Phumchai                   \033[0;36m*\033[0m\n");
            printf(" \033[0;31mID\033[0m    : \033[0;33m167205110169                         \033[0;36m*\033[0m\n");
            printf(" \033[0;31mPhone\033[0m : \033[0;33m0622706645                           \033[0;36m*\033[0m\n");
            printf(" \033[0;31mEmail\033[0m : \033[0;33mmrton512@gmail.com                   \033[0;36m*\033[0m\n");
            printf("\033[0;36m***********************************************\n");
			getch();
			goto c;
			break;
		}
		
		case 2: {
			 const char *yellow = "\033[33m"; // case 2
             const char *reset = "\033[0m";
             const char *blue = "\033[34m";
             const char *cyan = "\033[36m";
	
			printf("\033[0m__________________________________\n");
			printf("___________%s###%s______%s*%s_____________\n",yellow, reset,blue,reset);
			printf("________%s####%s__________________%s*%s___\n",yellow, reset,blue,reset);
			printf("______%s####%s________________%s*%s_______\n",yellow, reset,blue,reset);
			printf("____%s#####%s______________%s* *_* *%s____\n",yellow, reset,blue,reset);
			printf("___%s#####%s________________%s*_*_*%s_____\n",yellow, reset,blue,reset);
			printf("__%s######%s_______________%s**   **%s____\n",yellow, reset,blue,reset);
			printf("_%s#######%s__________________________\n",yellow, reset);
			printf("_%s#######%s__________________________\n",yellow, reset);
			printf("_%s########%s_______________%s*%s_________\n",yellow, reset,blue,reset);
			printf("_%s###############%s__________________\n",yellow, reset);
			printf("_%s############%s__________%s167205110169%s\n",yellow, reset,cyan, reset);
			printf("__%s##########%s__________%sATTAPOL PUMCHAI%s\n",yellow, reset,cyan, reset);
			printf("___%s###########%s____________________\n",yellow, reset);
			printf("____%s############################%s__\n",yellow, reset);
			printf("______%s#########################%s___\n",yellow, reset);
			printf("________%s#####################%s_____\n",yellow, reset);
			printf("__________%s#################%s_______\n",yellow, reset);
			printf("______________%s#########%s___________\n",yellow, reset);
			printf("__________________________________\n");
			getch();
			goto c;
			break;
		}
		
		case 3:{
	         float price, discount = 0.0; // case 3
             int useCoupon;
			printf("\033[0;34mEnter Price : ");
			scanf("%f", &price);
			printf("\033[0;33mEnter Copon 20%%\n");
			printf("\033[0;33m(Enter 0 if no coupon) : ");
			scanf("%d", &useCoupon);

			if (useCoupon == 169) { // coupon=169
				discount = price * 0.20;  
			}
 
			float TotalPrice = price - discount;
			printf("\033[0;32mTotal Price : %.2f Baht \033[0m\n", TotalPrice);
			getch();
			goto c;
			break;
		}
		
		case 4: {
			
		     float yourScore, midterm, finalS, totalScore; // case 4
			printf("\033[0;36mEnter Your Score: ");
			scanf("%f", &yourScore);
			printf("\033[0;36mEnter midterm: ");
			scanf("%f", &midterm);
			printf("\033[0;36mEnter final: ");
			scanf("%f", &finalS);
			totalScore = yourScore + midterm + finalS;
			 const char* grade = getGrade(totalScore);
			printf("\033[0;33mTotal Score: %.2f\n", totalScore);
			
		
			     if (grade == "A") {printf("\033[0;32mYour grade: %s\033[0m\n", grade); // A green
		  } else if (grade == "F") {printf("\033[0;31mYour grade: %s\033[0m\n", grade); // F red
		  } else                   {printf("Your grade: %s\n", grade); // No color 
			}
			getch();
			goto c;
			break;
		}

		case 5:{
		     int menu,total=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
			m:
			system("cls");
			printf("\033[0;31m**********Program Ran Khaw kraprow**********\n");
			printf("\033[0;36m******************\033[0;33m Menu\033[0m \033[0;36m********************\n");
			printf("**                                        **\n");
			printf("**  1.kraprow Pig 50 bath                 **\n");
			printf("**  2.kraprow Cow 60 bath                 **\n");
			printf("**  3.kraprow chicken 50 bath             **\n");
			printf("**  4.kraprow Fist Ink 55 bath            **\n");
			printf("**  5.kraprow Kung 70 bath                **\n");
			printf("**  6.kraprow Kung Dragon 550 bath        **\n");
			printf("**  7.kraprow Kung mother Water 470 bath  **\n");
			printf("**  8.+ Egg star 10 bath                  **\n");	
			printf("**  9.+ Egg Jeaw 10 bath                  **\n");
			printf("**                                        **\n");
			printf("********************************************\n");
			printf("\033[0;31m====> 0.Jay Tang\n");
			printf("\033[0;33mEnter number : ");
			scanf("%d",&menu);
	
			 if(menu == 1 ){a1=a1+1;printf("\033[0;32mOrder is kraprow Pig %d jan",a1); total =total+50;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 2 ){a2=a2+1;printf("Order is kraprow Cow %d jan",a2);total =total+60;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 3 ){a3=a3+1;printf("Order is kraprow chicken %d jan",a3);total =total+50;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 4 ){a4=a4+1;printf("Order is kraprow Fist Ink %d jan",a4);total =total+55;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 5 ){a5=a5+1;printf("Order is kraprow Kung %d jan",a5);total =total+70;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 6 ){a6=a6+1;printf("Order is kraprow Kung Dragon %d jan",a6);total =total+550;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 7 ){a7=a7+1;printf("Order is kraprow Kung mother Water %d jan",a7);total =total+470;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 8 ){a8=a8+1;printf("Order is + Egg star %d fong ",a8);total =total+10;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 9 ){a9=a9+1;printf("Order is + Egg Jeaw %d fong ",a9);total =total+10;printf("\nTotal = %d",total);getch();goto m;}
	    else if(menu == 0 )
	   {
	    printf("\033[0;32mtotal = %d bath \n",total);
		printf("\033[0;33m*************** \033[0;36mOrder Your\033[0m\033[0;33m *****************\n");
	    printf("**                                        **\n");
	    printf("**  1.kraprow Pig %d Jan                   **\n",a1);
	    printf("**  2.kraprow Cow %d Jan                   **\n",a2);
	    printf("**  3.kraprow chicken %d Jan               **\n",a3);
	    printf("**  4.kraprow Fist Ink                    **\n",a4);
	    printf("**  5.kraprow Kung %d Jan                  **\n",a5);
	    printf("**  6.kraprow Kung Dragon %d Jan           **\n",a6);
	    printf("**  7.kraprow Kung mother Water %d Jan     **\n",a7);
	    printf("**  8.+ Egg star %d Jan                    **\n",a8);     
	    printf("**  9.+ Egg Jeaw %d Jan                    **\n",a9);
	    printf("**                                        **\n");
	    printf("********************************************");
		getch();
		goto c;
		} else { printf("\nOut of menu");
		getch();
		goto m;
		}
		getch();
		goto c;
		break;
		}
		//--------------------------------------------------------------------------------------------------------------
		default: printf("\nOut of menu");
		getch();
		goto c;
		case 0 :{	
					printf("\n* THANK YOU *");
					getch();
					exit(0);
				}
	}
}

