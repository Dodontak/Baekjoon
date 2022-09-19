//clang으로 제출하니까 안되더라
#include <stdio.h>
#include <stdlib.h>

int static compare(const void* a,const void* b);

int arr[1000000];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),compare);
        for(int i=0;i<n;i++)
                printf("%d ",arr[i]);
        return 0;
}

int static compare(const void* a,const void* b)
{
        if(*(int*)a>*(int*)b) return 1;
        else if(*(int*)a<*(int*)b) return -1;
        else return 0;
}
