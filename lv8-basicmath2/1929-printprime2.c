#include <stdio.h>

int main()
{
	int m,n,i=2;
	scanf("%d %d",&m,&n);
	int arr[1000001]={0};
	while(i*i<=n)//i*i>n되면 중단
	{	
		if(arr[i]==0)//arr[i]가 소수라면
		{
			for(int a=2;a*i<=n;a++)//i빼고 i의 배수 전부 '소수 아니다'
			arr[a*i]=1;
		}
		i++;
	}
	for(int j=m;j<=n;j++)//m부터 n까지 소수 출력
	{

		if(arr[j]==0&&j!=1)
			printf("%d\n",j);
	}
	return 0;
}
