#include <stdio.h>
#include <string.h>

void reverse(char* s);

int main()
{
	char a[10001],b[10001],c[10001];
	int i=0;
	scanf("%s %s",a,b);
	reverse(a);
	reverse(b);
	while(a[i]!='\0'&&b[i]!='\0')
	{
		if(a[i]+b[i]+c[i]-'0'<='9') c[i]=a[i]+b[i]+c[i]-'0';
		else
		{
			c[i]=a[i]+b[i]+c[i]-'0'-10;
			c[i+1]++;
		}
		i++;
	}
	while(a[i]!='\0')//a의 문자열이 아직 남아있을때
	{
		if(a[i]+c[i]<='9') c[i]=a[i]+c[i];
                else
                {
                        c[i]=a[i]+c[i]-10;
                        c[i+1]++;
                }
                i++;
	}
	while(b[i]!='\0')//b의 문자열이 아직 남아있을때
        {
                if(b[i]+c[i]<='9') c[i]=b[i]+c[i];
                else
                {
                        c[i]=b[i]+c[i]-10;
                        c[i+1]++;
                }
                i++;
        }
	if(c[i]==1) c[i]+='0';
	reverse(c);
	printf("%s",c);
	return 0;
}

void reverse(char* s)
{
	int len=strlen(s);
	char tmp;
	for(int i=0;i<len/2;i++)
	{
		tmp=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=tmp;
	}
}
