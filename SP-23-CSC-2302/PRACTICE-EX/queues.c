#include<stdio.h>
int main(){
int number, odd=0, even=0;
printf("enter a number");
scanf("%d", &number);
while(number>0){
    if(number%2==0)
    {
    even++;
    }
    else if(number%2==1)
    {
        odd++ ;
    }
}
    printf("the number of even is:%d", even);
    printf("the number of odd is:%d", odd);
return 0;
}