#include <stdio.h>
#define size 10000
int main()
{
	int t;
	scanf("%d",&t);
	int arr[10001]={0};
	for(int i=2;i*i<=size;i++)//Size까지 소수 테이블 만들기
		if(arr[i]==0)//i가 소수이면
			for(int a=2;a*i<=size;a++)
				arr[a*i]=1;//i의 배수는 소수가 아니다.
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=n/2;i<=n;i++)
		{
			if(arr[i]==0&&arr[n-i]==0)//i,n-i둘 다 소수이면
			{
				printf("%d %d\n",n-i,i);
				break;	
			}
		}
	}
	return 0;
}
