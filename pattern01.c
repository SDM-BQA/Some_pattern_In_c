//* * * * *
//*       *
//*       *
//*       *
//* * * * *

#include<stdio.h>
#include <stdlib.h>
//int main()
//{
//	int n,i,j;
//	printf("Enter The No of Rows: ");
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(i==0 || j==0 || j==n-1 || i==n-1)
//				printf("*");
//			else
//			    printf(" ");
//		}
//		printf("\n");
//	}
//  return 0;
//}



//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*

//int main()
//{
//	int n,i,j;
//	
//	printf("Enter The No: ");
//	scanf("%d",&n);
//	
//	for(i = 1;i <= n;i++)
//	{
//		for(j = 0;j < i;j++)
//		printf("* ");
//		printf("\n");
//	}
//	for(i = n-1;i > 0;i--)
//	{
//		for(j = 0;j < i;j++)
//		printf("* ");
//		printf("\n");
//	}
//	return 0;
//}


//    *
//   * *
//  * * *
// * * * *
//* * * * *

//int main()
//{
//	int n,i,j,k;
//	
//	printf("Enter The No: ");
//	scanf("%d",&n);
//	
//	for(i = 1;i <= n;i++)
//	{
//		for(k = i;k < n;k++)
//		printf(" ");
//		for(j = 0;j < i;j++)
//		printf("* ");
//		printf("\n");
//	}
//}


//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *

//int main()
//{
//	int n,i,j,k;
//	
//	printf("Enter The No: ");
//	scanf("%d",&n);
//	
//	for(i = 1;i <= n;i++)
//	{
//		for(k = i;k < n;k++)
//		printf(" ");
//		for(j = 0;j < i;j++)
//		printf("* ");
//		printf("\n");
//	}
//	for(i = n-1;i > 0;i--)
//	{
//		for(k = n;k > i;k--)
//		printf(" ");
//		for(j = 0;j < i;j++)
//		printf("* ");
//		printf("\n");
//	}
//	return 0;
//}


// *
//  * *
//   * * *
//    * * * *
//     * * * * *
//    * * * *
//   * * *
//  * *
// *

int main()
{
	int n,i,j,k;
	
	printf("Enter The No: ");
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++)
	{
		for(k = 0;k < i;k++)
		printf(" ");
		for(j = 0;j < i;j++)
		printf("* ");
		printf("\n");
	}
	for(i = n-1;i > 0;i--)
	{
		for(k = 0;k < i;k++)
		printf(" ");
		for(j = 0;j < i;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
}

//$********$
//*$      $*
//* $    $ *
//*  $  $  *
//*   $$   *
//*   $$   *
//*  $  $  *
//* $    $ *
//*$      $*
//$********$

//int main()
//{
//	int n,i,j,k;
//	printf("Enter The No: ");
//	scanf("%d",&n);
//	for(i = 0;i < n;i++)
//	{
//		for(j = 0;j < n;j++)
//		if((i == 0 && j ==0) || (i == n-1 && j == 0) || (i == 0 && j == n-1) || (i == n-1 && j == n-1) || (i == j) || (i+j == n-1))
//		printf("$");
//		else if(i == 0 || j == 0 || i == n-1 || j == n-1)
//		printf("*");
//		else
//		printf(" ");
//		printf("\n");
//	}	
//	return 0;
//}

//int main()
//{
//	int n = 5,i,j;
//	
//	for(i=0;i < n;i++)
//	{
//		for(j = 0;j < (n*2);j++)
//		{
//			if((i == 0 && j==0) || (i == n-1) || (j == (n*2)-1) || (j == 0) || (i == j) || (i+j==n-1))
//			printf("*");
//			else
//			printf(" ");
//		}
//		printf("\n");
//	}
//}
