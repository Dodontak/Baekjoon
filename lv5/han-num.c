#include <stdio.h>
#include <stdbool.h>
bool check_han_num(int n);

int main(void)
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(check_han_num(i)==true)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

bool check_han_num(int n)
{
	int a,b,c;
        if(n<100) return true;
        else if(n==1000) return false;
        else
        {
                a=n%10;
                b=(n/10)%10;
                c=(n/100)%10;
                if(a-b==b-c) return true;
                else return false;
        }
        return false;
}
