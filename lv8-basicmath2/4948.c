#include <stdio.h>

int main()
{
        int n,i=2;
        int arr[246913]={0};
        while(i*i<=246912)//i*i>246912되면 중단
        {       
                if(arr[i]==0)//arr[i]가 소수라면
                {
                        for(int a=2;a*i<=246912;a++)//i빼고 i의 배수 전부 '소수 아니다'
                        	arr[a*i]=1;
                }
                i++;
        }


	while(1)
	{
		int count=0;
		scanf("%d",&n);
		if(n==0) break;
		for(int j=n+1;j<=2*n;j++)//n부터 2n까지 소수 세기
		{       
			if(arr[j]==0&&j!=1)
				count++;
		}
		printf("%d\n",count);
	}
        return 0;
}
