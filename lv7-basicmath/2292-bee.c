#include <stdio.h>
#include <math.h>
int main()
{
	double N,n;
	scanf("%d",&N);
	if(N-1==0) printf("1");
	else if(N-1<=6) printf("2");
	else 
	{
		n=(-3+sqrt(9+12*N))/2;
		printf("n");
	}
	return 0;
}
