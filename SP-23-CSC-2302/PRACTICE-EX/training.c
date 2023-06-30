#include<stdio.h>
#define SIZE 5

int numbers[SIZE], front=-1, rear=-1;


void enqueue(int value)
{
    if(rear == SIZE-1)
    {
        printf("Queue Is Full!\n");
    }
        else if(front == -1)
        {
            printf("Inserted-->%d", value);
            front = 0;
            rear++;
            numbers[rear] = value;
        }
            else if(front==0)
            {
                printf("Inserted-->%d", value);
                rear++;
                numbers[rear]=value;
            }
            printf("\n");
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue Is Empty\n");
    }else
        {
        printf("Element Deleted-->%d\n", numbers[front]);
        front++;
        if(front>rear)
            {
                front=rear-1;
            }
        }
    printf("\n");
}    

void display()
{
    int i;
    if(front==-1)
        {
            printf("Queue Is Empty\n");
            return;
        }
        else
            {
                printf("Queue elements are: ");
                for (int i = front; i <= rear; i++) 
                    {
                        printf("%d ", numbers[i]);
                    }
        printf("\n");
        }
}

int main()
{
    printf("----------------------------------------------\n");
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    display();
    printf("----------------------------------------------\n");
    return 0;
}