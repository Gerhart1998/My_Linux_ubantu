#include<stdio.h>
void sort(int* a,int len);
int main(void)
{
	int a[10] = {0};
	int i;
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	for(i = 0;i < 10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void sort(int* a,int len)
{
	int i,j;
	for(i = 0; i < len -1;i++)
	{
		for(j = 0;j < len - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				int sum = a[j];
				a[j] = a[j + 1];
				a[j + 1] = sum;
			}
		}
	}
}
