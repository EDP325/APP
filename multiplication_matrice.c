#include <stdio.h>
#define n 2
int multi(int matriceA[n][n], int matriceB[n][n],int matriceR[n][n])
{	int somme=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0; k<n;k++)
			{
				somme = somme+(matriceA[i][k]*matriceB[k][j]);
			}
		matriceR[i][j]=somme;
		somme=0;
		}
	}
	return 0;
}
int main()
{
	int matriceA[n][n] = {{1,2},{3,4}};
	int matriceB[n][n] = {{5,6},{7,8}};
	int matriceR[n][n] = {{0,0},{0,0}};
	multi(matriceA,matriceB,matriceR);
	printf("MatriceA:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				printf("%d\t",matriceA[i][j]);
			}
		printf("\n");
	}
	printf("MatriceB:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",matriceB[i][j]);
		}
		printf("\n");
	}
	printf("Matrice Resultante:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",matriceR[i][j]);	
		}
	printf("\n");
	}
	return 0;
}
