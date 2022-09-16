#include <stdio.h>

int main(void)
{
	char s[1000000];
	int n=0,count=0;
	scanf("%[^\n]",s);
	while(s[n]!='\0')
	{
		if(s[n]==' ') count++;
		n++;
	}
	if(s[0]==' ') count--;
	if(s[n-1]==' ') count--;
	printf("%d",count+1);
}
