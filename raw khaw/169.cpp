#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


main()
{
	 while (1){
		
	int menu,total,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
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
	
	}
	else {printf("\nOut of menu");getch();goto m;	}
	
	getch();
    system("cls");
}
}

