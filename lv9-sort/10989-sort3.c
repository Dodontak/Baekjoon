#include <stdio.h>

int main()
{
	int n,i,a;
	scanf("%d",&n);
	int out[10001]={0};
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		out[a]++;
	}
	for(i=1;i<=10000;i++)
		while(out[i]--)
			printf("%d\n",i);
	return 0;
}
