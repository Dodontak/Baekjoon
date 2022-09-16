#include <stdio.h>

int main(void)
{
	char s[100];
	scanf("%s",s);
	for(int i=0;i<26;i++)
	{//a부터 z까지 확인하자
		int n=0;
		while(s[n]!='\0')
		{//s0~끝까지 확인하자
			if(s[n]==i+97)
			{//s[n]이 있으면 지금 위치 프린트,break
				printf("%d ",n);
				break;
			}
			n++;
			if(s[n]=='\0')//끝까지 없으면 -1출력
			{
				printf("-1 ");
			}
		}
	}
}
