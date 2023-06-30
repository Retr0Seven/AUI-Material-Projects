#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct emp{
    char name[20];
    double salary;
    struct emp *next;
}employee;

employee *top=NULL;


void push(employee *e){
    if(top==NULL)
    {
        e->next=NULL;
    }else{
        e->next=top;
    }
    top=e;
    printf("Inserted\n");
}

bool isEmpty(){
    return top==NULL;
}

void pop(){
    if(isEmpty())
    {
        printf("The Stack Is Empty!\n");
    }else{
        employee *temp;
        temp=top;
        top=temp->next;
        free(temp);
        printf("Popped\n");
    }
}

void display(){
    if(isEmpty())
    {
        printf("The Stack Is Empty!\n");
    }else{
        employee *walker;
        walker=top;
        while(walker!=NULL){
            printf("%s %.2lf\n", walker->name, walker->salary);
            walker=walker->next;
        }
    }
}

void main()
{
   int choice;
   char name[20];
   double salary;
   
   printf("\nStack using Linked List :\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: 
		 printf("Enter the name of the new element: ");
		 scanf("%s", name);
		 printf("Enter the salary of the new element: ");
		 scanf("%lf", &salary);
		 employee * newNode = (employee *)malloc(sizeof(employee));
		 strcpy(newNode->name, name);
		 newNode->salary = salary;
		 push(newNode);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;
	 case 4: break;
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}