#include <stdio.h>

int main()
{
	int t,count=0;
	scanf("%d",&t);
	while(t--)
	{
		int n,i=2;
		scanf("%d",&n);
		while(1)
		{
			if(i==n)
                        {
                                count++;
                                break;
                        }
			if(n%i==0) break;
			i++;
			if(n==1) break;
		}
	}
	printf("%d",count);
}
