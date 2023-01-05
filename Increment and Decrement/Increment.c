#include <stdio.h>

int main()
{
    int no = 10;
    int x =5;

    no-= 4;

    printf("%d\n", no);

    printf("%d\n", ++x);
    printf("%d\n", x); 

    printf("%d\n", x++);
    printf("%d\n", x);

    return 0;
}