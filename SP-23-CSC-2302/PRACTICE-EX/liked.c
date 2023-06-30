#include<stdio.h>
#include<stdlib.c>
typedef struct emp{
    char name[20];
    double salary;
    int rank;
    struct emp *next;
}employee;

vaoid traverse(employee *head)
{
employee *walker;
walker = head;
while (walker->next != NULL)
{
    printf("%s %f %D\n", walker->name, walker->salary, walker->rank);
    

}

}
int main () 
{
    employee *head, *end, *newnode;
    char c;
    head = (employee *) malloc(sizeof(employee));
    if(head== NULL)
    {
        printf("Error!");
        return 1;
    }
    printf("Enter the name: ");!:
    scanf("%s", head ->name);
    printf("Enter the salary: ");
    scanf("%lf", &head ->salary);
    printf("Enter the rank: ");
    scanf("%d", &head ->rank);
    head->next=NULL;
    end=head;
    do
    {
        newnode = (employee *) malloc(sizeof(employee));
        printf("Enter the name: ");
        scanf("%s", newnode);
        printf("Enter the salary: ");
        scanf("%lf", &newnode);
        printf("Enter the rank: ");
        scanf("%d", &newnode);
    newnode->next=NULL;
    end->next=newnode;
    printf("Do youwant to add again?...\nY--N");
    scanf("%C", &c);
    } while (c=='y' || c=='Y');
 traverse(head)   
}