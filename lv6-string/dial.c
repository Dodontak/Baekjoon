#include <stdio.h>

int main()
{
	char s[15];
	int n=0,time=0;
	scanf("%s",s);
	while(s[n]!='\0')
	{
		if(s[n]>='W') time+=10;
		else if(s[n]>='T') time+=9;
		else if(s[n]>='P') time+=8;
		else if(s[n]>='M') time+=7;
		else if(s[n]>='J') time+=6;
		else if(s[n]>='G') time+=5;
		else if(s[n]>='D') time+=4;
		else time+=3;
		n++;
	}
	printf("%d",time);
}
