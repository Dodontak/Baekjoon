#include <stdio.h>

int main(void)
{
	int n,a,b,c;
	scanf("%d",&n);
	if(n<100) printf("%d",n);
	else if(n==1000) return 0;
	else
	{
		a=n%10;
		b=(n/10)%10;
		c=(n/100)%10;
		if(a-b==b-c) printf("%d",n);
		else return 0;
	}
	return 0;
}
