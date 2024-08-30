#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	while (1) {
    float price, discount = 0.0;
    int useCoupon;

    printf("\033[0;31mEnter Price : ");
    scanf("%f", &price);

    printf("\033[0;33mEnter Copon 20%%\n"); 
    printf("\033[0;33m(Enter 0 if no coupon) : "); 
    scanf("%d", &useCoupon);

    if (useCoupon == 169) { // coupon=169
        discount = price * 0.20;  
    }
 
    float TotalPrice = price - discount;


    printf("\033[0;32mTotal Price : %.2f Baht \n", TotalPrice);
    
    getch();
    system("cls");
}
    return 0;
}

