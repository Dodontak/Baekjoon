#include <stdio.h>

void merge(int *arr,int N, int first, int mid, int last);
void merge_sort(int *arr,int N, int first, int last);

int main()
{
        int n,N=0,i=0;
        scanf("%d",&n);
        int arr[10];
        while(n>0)
        {
                arr[i]=n%10;
                n/=10;
                N++;
                i++;
        }
        merge_sort(arr,N,0,N-1);
        for(int j=N-1;j>=0;j--)
                printf("%d",arr[j]);
}
void merge(int *arr,int N, int first, int mid, int last)
{
        int x=first;
        int tmp[N];
        int i=first;
        int j=mid+1;
        while(i<=mid&&j<=last)
        {
                if(arr[i]<arr[j])
                {
                        tmp[x]=arr[i];
                        i++;
                        x++;
                }
                else
                {
                        tmp[x]=arr[j];
                        j++;
                        x++;
                }
        }
        while(j<=last)//j가 아직 남았다면
        {
                tmp[x]=arr[j];
                j++;
                x++;
        }
        while(i<=mid)//i가 아직 남았다면
        {
                tmp[x]=arr[i];
                i++;
                x++;
        }
        for(int k=first;k<=last;k++)//tmp에 저장한거 arr에 붙쳐넣기
                arr[k]=tmp[k];
}

void merge_sort(int *arr,int N, int first, int last)
{
        if(first==last) return;
        int mid=(first+last)/2;
        merge_sort(arr,N,first,mid);
        merge_sort(arr,N,mid+1,last);
        merge(arr,N,first,mid,last);
}
