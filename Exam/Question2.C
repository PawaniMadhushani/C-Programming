#include <stdio.h>

int main()
{
    char type_acc[20];
    float balance,interest,interest_rate;
    

    printf("Enter the Type of Account:");
    scanf("%s", &type_acc);

    printf("Enter the Balance:");
    scanf("%f", &balance);

    if(type_acc == "Senior") {
        interest_rate = 15;
    }
    else if(type_acc == "Minor") {
        interest_rate = 10;
    }
    else if(type_acc == "Personal") {
        interest_rate = 7;
    }
    else {
        interest_rate = 4;
    }

    interest = balance * interest_rate/100;
    printf("The Interest is %.2f\n", interest);
    
    return 0;
    

    
     
}