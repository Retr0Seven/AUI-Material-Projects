#include<stdio.h>
#include<stdlib.h>

typedef struct emp{
    char name[20];
    double salary;
    struct emp* next;
}employee;

employee *front= NULL;
employee *rear=NULL;

//enqueue function-------------------------------
void enqueue(){
    employee *e = (employee*)malloc(sizeof(employee));
    printf("enter the name: ");
    scanf("%s",e->name);
    printf("enter the salary: ");
    scanf("%lf",&e->salary);
    if(front == NULL )
    {
        front = e;
        front->next= NULL;
        rear=front;
    }else{
        rear->next = e;
        rear = e;
        e->next= NULL;
    }
}

void dequeue(){
    if(front ==NULL)
    {
        printf("The Queue Is Empty!!\n");
        return;
    }else{
        employee *temp;
        temp = front;
        front =front->next;
        free(temp);
    }
}

void display(){
    if(front == NULL)
    {
        printf("The Queue Is Empty!!\n");
        return;
    }else{
        employee *walker;
        walker = front;
        while(walker!=NULL)
        {
            printf("%s %.2f\n",walker->name,walker->salary);
            walker =walker->next;
        }
    }
}

int main(){
    enqueue();
	enqueue();
	display();
	printf("After dequeue: \n");
	dequeue();
	display();
}