#include <stdio.h>

int main()
{
	int a=10;
	for(int i=0;i<10;i++)
	{
		printf("%d",a);
		if(i>5) break;
	}

	return 0;
}
