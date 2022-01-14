#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[10];
	gets(a);
	for(int i=4;i>=0;i--)
		putchar(a[i]);
	return 0;
}