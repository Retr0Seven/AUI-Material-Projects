#include<stdio.h>

int number, integer, sum= 0, total= 0;
int main()
{
    printf("---------------First-Part---------------\n");
    while(sum < 20)
    {
        printf("Enter a number less than 20: ");
        scanf("%d", &number);
        if (sum + number <= 20)
        {
          sum = sum + number;
          printf("current sum: %d\n", sum);    
    }  }
        printf("---------------Second-Part---------------\n");
    do {
        printf("Enter a number less than 20: ");
        scanf("%d", &integer);
        if (integer + total < 20)
        {        
        total = total + integer;
        printf("current sum: %d\n", total);
        } 
        }while (total <= 20);   
        printf("---------END-OF-CODE---------"); 
    return 0;
}