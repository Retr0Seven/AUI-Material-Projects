#include <stdio.h>


//initMatrix
//addEdge
//printMatrix
//numEdges
//getInDegree
//getOutDegree
//traversal

void initMatrix(int matrix[100][100], int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void printMatrix(int matrix[100][100], int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void addEdge(int matrix[100][100], int n, int a, int b)
{
	if(a>n || b>n) printf("Invalid vetrex!\n");
	else
	{
		matrix[a][b] = 1;
		matrix[b][a] = 1;
	}

}

int numEdges(int matrix[100][100], int n)
{
	int c = 0;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(matrix[i][j] == 1) c ++;
		}
	}
	return c;
}

void main()
{
	int n; 
	int m[100][100]; 
	printf("Enter the number of vertecies: ");
	scanf("%d", &n);
	initMatrix(m, n);
	addEdge(m, n, 1, 2);
	addEdge(m, n, 2, 3);
	addEdge(m, n, 0, 1);
	addEdge(m, n, 5, 6);
	printMatrix(m, n);
	printf("The number of edges is: %d\n", numEdges(m, n));
}
