#include <stdio.h>  // Standard Input Output Header File

int main()  // Main Function
{  // start of the function
     float amount,withdraw_amount,current_amount;

     printf("Enter the Withdraw Amount:");
     scanf("%f", &withdraw_amount);

     

     if(withdraw_amount <= amount) {
        current_amount = amount - withdraw_amount;
        printf("The Current Amount is %.2f\n", current_amount);
     }
     else {
        printf("Amount not available\n");
     }
 
     return 0;

}