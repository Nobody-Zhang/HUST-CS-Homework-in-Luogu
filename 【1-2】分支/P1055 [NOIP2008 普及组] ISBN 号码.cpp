#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char s[15];
	int num[13],k=0;
	memset(num,0,sizeof(num));
	gets(s);
	for(int i=0;s[i];i++)
	{
		if(s[i]!='-')
		{
			if(s[i]=='X')
				num[++k]=10;
			else num[++k]=s[i]-'0';
		}
	}
	int ch=0;
	for(int i=1;i<=9;i++)
	{
		ch=ch+i*num[i];
		ch%=11;
	}
	if(ch==num[k]) printf("Right");
	else
	{
		for(int i=0;s[i+1];i++)
			putchar(s[i]);
		if(num[k]==10) printf("X");
		else printf("%d",ch);
	}
	return 0;
}