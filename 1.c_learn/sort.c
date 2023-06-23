#include<stdio.h>

int less(int x,int y)
{
	return (x > y) ? 1 : 0;
}

int biger(int x,int y)
{
	return (x < y) ? 1: 0;
}

void sort(int *a,int len,int (*p)())
{
	int i,j;
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len - i - 1;j++)
		{
			if(p(a[j],a[j + 1]))
			{
				int num = a[j];
				a[j] = a[j + 1];
				a[j + 1] = num;
			}
		}
	}
}

int main(void)
{
	int a[5] = {0};
	int i;
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}

	sort(a , 5 , biger);

	for(i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
		printf("\n");


	return 0;
}
