#include <stdio.h>
#include <stdbool.h>

bool isprime(int n);

int main()
{
	int m,n,min,sum=0;
	scanf("%d %d",&m,&n);
	for(int i=n;i>=m;i--)
		if(isprime(i))
		{	
			sum+=i;
			min=i;
		}
	if(sum==0)
		printf("%d",-1);
	else
		printf("%d\n%d",sum,min);
}

bool isprime(int n)
{
	if(n<=1) return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0) return false;
	return true;
}
