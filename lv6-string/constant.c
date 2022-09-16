#include <stdio.h>

int main()
{
	int a,b;
	int aa[3],bb[3];
	scanf("%d %d",&a,&b);
	for(int i=0;i<3;i++)
	{
		aa[i]=a%10;
		bb[i]=b%10;
		a=a/10;
		b=b/10;
	}
	if(aa[0]*100+aa[1]*10+aa[2]>bb[0]*100+bb[1]*10+bb[2])
	{
		for(int i=0;i<3;i++) printf("%d",aa[i]);
	}
	else
	{
		for(int i=0;i<3;i++) printf("%d",bb[i]);
	}
	return 0;
}
