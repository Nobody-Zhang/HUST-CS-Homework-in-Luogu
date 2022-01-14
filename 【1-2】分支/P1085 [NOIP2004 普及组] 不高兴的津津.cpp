#include<stdio.h>
int a[10];
int main()
{
	for(int i=1;i<=7;i++)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		a[i]=m+n;
	}
	int maxx=a[1];
	for(int i=2;i<=7;i++)
		maxx=maxx>a[i]?maxx:a[i];
	if(maxx<=8){
		printf("0");
		return 0;
	}
	for(int i=1;i<=7;i++)
		if(maxx==a[i])
		{
			printf("%d",i);
			return 0;
		}
}