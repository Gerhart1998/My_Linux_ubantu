#include<stdio.h>


void f1(void)
{
	printf("hello world\n");
}

int add (int x,int y)
{
	return x + y; 
}

int main (void)
{
	void (*p)();	//Define pointer
	p = f1;
	p();		//Call a function by means of a function pointer; = f1();
	int (*a)(int,int) = add;
	printf("%d\n",a(3,4));
	return 0;
}
