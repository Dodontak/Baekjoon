#include <stdio.h>

int main(void)
{
	int n,a[26]={0},maxindex=0,max=0,count=0;
	char s[1000000];
	scanf("%s",s);
	while(s[n]!='\0')
	{//다 대문자로 바꾸기+알파벳 사용횟수 업데이트
		if(s[n]>='a'&&s[n]<='z')
		{
			s[n]-=32;
		}
		a[s[n]-65]++;
		n++;
	}
	for(int i=0;i<26;i++)
	{//가장 많이 사용된 횟수, 그 인덱스 저장
		if(a[i]>max)
		{
			maxindex=i;
			max=a[i];
		}
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]==max) count++;
	}
	if(count>1) printf("?");
	else printf("%c",maxindex+'A');
}
