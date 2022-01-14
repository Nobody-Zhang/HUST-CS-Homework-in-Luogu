#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int ans=pow(m,1.0/n);
	printf("%d",ans);
	return 0;
}