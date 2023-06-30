#include<stdio.h>
#include<stdlib.h>

typedef struct emp{
	
	char name[20];
	double salary;
	int rank;
	struct emp *next;
	
}employee;

employee *head;

//insertFirst
//insertEnd
//deleteEnd
//deleteFirst
//promoteLastEmployee
//search

//insertAtPos
//deleteAtPos

void insertFirst(employee *newNode)
{
	newNode->next = head;
	head = newNode;
}

void insertEnd(employee *newNode)
{
	employee *temp;
	temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

employee * search(char name[20])
{
	employee *temp = head;
	while(temp != NULL)
	{
		if(strcmp(temp->name, name) == 0)
		{
			return temp;
		}
		temp = temp->next;
	}
	
	return NULL;
}

void deleteFist()
{
	employee *deleted = head;
	head = head->next;
	deleted->next = NULL;
	free(deleted);
}

void deleteEnd()
{
	employee *temp = head;
	employee *temp2 = head;
	
	while(temp->next != NULL)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	free(temp);
}

void traverse()
{
	employee *walker;
	walker = head;
	while(walker != NULL)
	{
		printf("%s %f %d\n", walker->name, walker->salary, walker->rank);
		walker = walker->next;
	}
}

int main()
{
	employee *rear, *newNode;
	char c;
	
	head = (employee *)malloc(sizeof(employee));
	printf("Name: "); scanf("%s", head->name);
	printf("Salary: "); scanf("%lf", &head->salary);
	printf("Rank: "); scanf("%d", &head->rank);
	head->next = NULL;
	rear = head;
	
	do{
		
		newNode = (employee *)malloc(sizeof(employee));
		printf("Name: "); scanf("%s", newNode->name);
		printf("Salary: "); scanf("%lf", &newNode->salary);
		printf("Rank: "); scanf("%d", &newNode->rank);
		newNode->next = NULL;
		rear->next = newNode;
		rear= newNode;
		
		printf("Do you have other employees?");
		scanf(" %c", &c);	
		
	}while(c=='y'||c=='Y');
	printf("--- Initial content of the LL ---\n");
	traverse();
	printf("--- Insert first ---\n");
	employee *node = (employee *)malloc(sizeof(employee));
	strcpy(node->name, "John");
	node->salary = 100;
	node->rank = 1;
	node->next = NULL;
	insertFirst(node);
	traverse();
	printf("--- Insert end ---\n");
	employee *node1 = (employee *)malloc(sizeof(employee));
	strcpy(node1->name, "Jane");
	node1->salary = 200;
	node1->rank = 2;
	node1->next = NULL;
	insertEnd(node1);
	traverse();
	printf("--- Delete first ---\n");
	deleteFist();
	traverse();
	printf("--- Delete last ---\n");
	deleteEnd();
	traverse();
	printf("--- search ---\n");
	employee *result = search("sara");
	if(result == NULL)
	{
		printf("Not found!\n");
	}
	else
	{
		printf("%s %f %d\n", result->name, result->salary, result->rank);
	}

	void promoteLast(double add)
	{
		employee *walker = head;
		while (walker->next != NULL)
		{
			walker = walker->next;
		}
		walker->salary += add;

		
	}
	
	
	

	
}