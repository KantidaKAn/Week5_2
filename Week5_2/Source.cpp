#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, f,j;
	scanf("%d", &num);
	for (f = 0; f < num; f++) 
	{
		for(j = 0 ; j < num - f;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
