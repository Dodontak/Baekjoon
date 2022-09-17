#include <stdio.h>

int k(int n);

int main()
{
	int N;
	int n=0;
	scanf("%d",&N);
	while(1)
	{
		if(N>k(n)&&N<=k(n+1))
		{
			printf("%d",n+1);
			return 0;
		}
		n++;
	}
	return 0;
}

int k(int n)
{
	int ans;
	if (n==0) ans=0;
	else if(n==1) ans=1;
	else ans=(n-1)*(12+(n-2)*6)/2+1;
	return ans;
}

