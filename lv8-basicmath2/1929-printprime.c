#include <stdio.h>
#include <stdbool.h>

bool isprime(int n);

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(isprime(i)==true)
			printf("%d\n",i);
	}
}

bool isprime(int n)
{
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++)
                if(n%i==0) return false;
        return true;
}
