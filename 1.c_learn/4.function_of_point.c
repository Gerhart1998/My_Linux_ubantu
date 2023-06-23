#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *init()
{
	char *str = (char *)malloc(128);
}

int main(void)
{
	char *s = init();
	strcpy(s,"hello");
	free(s);
	return 0;
}
