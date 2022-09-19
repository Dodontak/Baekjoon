#include <stdio.h>

void bubble_sort(int* a,int N);

int main()
{
	int N,n;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
		scanf("%d",&arr[i]);
	bubble_sort(arr,N);
	for(int i=0;i<N;i++)
		printf("%d\n",arr[i]);

	return 0;
}

void bubble_sort(int* a,int N)
{
	int tmp;
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}			
		}
	}
}
