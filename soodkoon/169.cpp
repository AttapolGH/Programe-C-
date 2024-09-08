#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
     m:
    int start = 169;  
    int Soodkoon, rounds, i;

    
    printf("\033[32mSoodkoon M: ");
    scanf("%d", &Soodkoon);
    
    printf("round: ");
    scanf("%d", &rounds);

   
    printf("\033[33m***   \033[31mSoodkoon M = %d\033[0m \033[33m****\n", Soodkoon, start);
    printf("**                     **\n");
    for(i = 1; i <= rounds; i++) {
    printf("\033[33m** \033[0m  \033[36m%d x %d = %d\033[0m    \033[33m **\n", start, Soodkoon, start * Soodkoon );
    start++;
	
       
    }
    printf("\033[33m**                     **\n");
	printf("\033[33m*************************");
	getch();
    system("cls");
    goto m;
}

