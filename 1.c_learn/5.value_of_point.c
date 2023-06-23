#include <stdio.h>

int main(void)
{
	int a = 112,b = -1;
	float c = 3.14;
	int *d = &a;
	float *e = &c;

	printf("%d\n%d\n%f\n%d\n%d\n%p\n%p\n%p\n%p\n%d\n",a,b,c,d,e,&a,&c,&*d,&*e,*d);
	return 0;
}

