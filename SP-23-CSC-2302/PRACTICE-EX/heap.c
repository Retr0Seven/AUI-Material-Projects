#include <stdio.h>

//swap
//printHeap
//buildHeap
//heapify


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printHeap(int array[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("%d ", array[i]);
	}
}


void printArray(int array[], int n)
{
	for(int i = 0; i< n/2; i++)
	{
		printf("Root: %d\n", array[i]);
		if(2*i+1 < n)
		printf("Left: %d\n", array[2*i+1]);
		if(2*i+2 < n)
		printf("Right: %d\n", array[2*i+2]);
	}
}


void heapify(int array[], int n, int i)
{
	int largest = i;
	int leftchild = 2 * i + 1;
	int rightchild = 2 * i + 2;
	
	if(leftchild < n && array[leftchild] > array[i])
	{
		largest = leftchild;
	}
	if(rightchild < n && array[rightchild] > array[i] && array[rightchild]>array[leftchild])
	{
		largest = rightchild;
	}
	if(largest != i)
	{
		swap(&array[i], &array[largest]);
		heapify(array, n, largest);
	}
	
}

void buildheap(int array[], int n)
{
	int last = (n/2) - 1;
	for(int i = last; i>=0; i--)
	{
		heapify(array, n, i);
	}
}



void main()
{

	int arr[] = {4, 18, 17, 10, 19, 20, 14, 8, 3, 12};
	int n = sizeof(arr)/sizeof(int);
	
	printHeap(arr, n);
	
	buildheap(arr, n);
	printf("\n");
	printHeap(arr, n);
	printf("\n");
	printArray(arr, n);
	

	
}