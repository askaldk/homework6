#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N];
	int i, j, temp;
	printf("�п�J�Q�Ӽ�:");
	for (i = 0;i < N;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = N-1;i >= 0;i--)
	{
		for (j = i;j >= 0;j--)
		{
			if (a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0;i < N;i++)
	{
		printf("%4d", a[i]);
	}
	system("pause");
}