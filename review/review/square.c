#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
void square() {
	while (1) {
		printf("Enter number:");
		int a = 0;
		scanf("%d", &a);
		if (a > 0)
		{
			printf("Square root of %d is %.6f\n",a,sqrt(a));
		}
		else if (0 == a)
		{
			exit();
		}
		else
		{
			printf("Negative number! Enter a new number.\n");
		}
	}
}

void squareAsterrisk(int side)
{
	if (side >= 1 && side <= 20)
	{
		for (int i = 0; i < side; i++)
		{
			for (int j = 0; j < side; j)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("out of bound\n");
	}
}
void squareAsterrisk2(int side)
{
	if (side >= 1 && side <= 20)
	{
		for (int i = 0; i < side; i++)
		{
			for (int j = 0; j < side; j++)
			{
				if (i == 0 || i == side - 1)
					printf("*");
				else if (j != 0 && j != side - 1)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("out of bound\n");
	}
}

void ComCal(float money)
{
	if ((int)money == -1)
	{
		printf("%d\n", (int)money);
		exit(1);
	}
	else
		printf("%.2f\n", money * 0.09 + 200);
}
void FloydTriangle(int num)
{
	
	int cur = 1;
	for (int i = 1; i <= num; i++)
	{
		
		for (int j = 1; j <= i; j++)
		{
			printf("%d",  cur);
			cur++;
		}
		printf("\n");
		
	}
}

void BintoDel(int num)
{
	int sum = 0;
	int temp = num;
	int len = 0;
	while (num)
	{
		sum += (num%10)*(int)pow(2,len) ;
		len++;
		num /= 10;
	}
	printf("%d", sum);
}
