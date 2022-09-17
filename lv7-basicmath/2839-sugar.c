#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=1666;i++)
	{
		for(int j=0;j<=1000;j++)
		{
			if(n==i*3+j*5)
			{
				printf("%d",i+j);
				return 0;
			}
		}
	}
	printf("%d",-1);
}
	
