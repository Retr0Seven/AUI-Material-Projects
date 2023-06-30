#include<stdio.h>
#include<stdbool.h>

typedef struct 
{
    char name[20];
    double salary;
}employee;

int top = -1, n;
employee stack[100];
//push
//pop
//isempty
//isfull
//display

bool isEmpty()
{
    if(top == -1) return true;
    else return false;
}
bool isFull()
{
    if(top == n-1) return true;
    else return false;
}
void push(employee e)
{
    if(isFull())
    {
        printf("The Stack Is Full!");
    }
    top = top + 1;
    //++top
    stack[top] = e;
}
void pop()
{
    if(isEmpty())
    {
        printf("The Stack Is Empty!");
    }else{
        top = top - 1;
        //top--
    }
}
employee getTop()
{
    employee r = {"empty", 0};
    if(isEmpty())
    {
    return r;
    }
    return stack[top];
}
void display()
{
    int i;
    if(isEmpty())
    {
        printf("The stack is empty!");
        return;
    }
    for(i= top ; i>=0 ; i--)
    {
        printf("%s %lf\n", stack[i].name, stack[i].salary);
    }
}


void main()
{
    int n, i;
    printf("Enter the size of the stack: "); scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        employee e;
         printf("Enter the name: "); 
         scanf("%s", e.name);
         printf("Enter the salary: "); 
         scanf("%lf", &e.salary);
         push (e);
    }
    display();
    printf("Get top: \n");
    employee r = getTop();
    if(strcmp(r.name, "empty") == 0)
    {
        printf("The stack is empty!\n");
    }else{
        printf("The top of the stack is %s %lf\n", result.name, result.salary)

    }

}
