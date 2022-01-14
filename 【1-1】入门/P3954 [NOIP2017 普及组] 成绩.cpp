#include<stdio.h>

int main()
{
	int t,b[]={20,30,50},ans=0;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&t);
		ans=ans+b[i]*t/100;
	}
	printf("%d",ans);
	return 0;
}