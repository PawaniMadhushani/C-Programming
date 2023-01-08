#include <stdio.h>

int main()
{
    char grade;
    printf("Enter the Grade:");
    scanf("%c", &grade);

    if(grade == 'A')  {
        printf("Excellent\n");
    }
    else if(grade == 'B')  {
        printf("Good\n");
    }
    else if(grade == 'C')  {
        printf("Satisfactory\n");
    }
    else  {
        printf("Needs Improvment\n");
    }

    return 0;
}




#include <stdio.h>

int main()
{
    char grade;
    printf("Enter the Grade:");
    scanf("%c", &grade);

    switch(grade)
    {
       case 'A':
          printf("Excellent\n");
          break;
          
        case 'B':
          printf("Good\n");
          break;
          
        case 'C':
          printf("Satisfactory\n");
          break;
          
        default:
          printf("Needs Improvment\n");
          break;      
    }

    return 0;
    
}