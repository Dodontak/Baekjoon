#include <stdio.h>

typedef struct
{
        int x;
        int y;
}
pair;

void merge(pair *arr,int N, int first, int mid, int last, int type);
void merge_sort(pair *arr,int N, int first, int last,int type);

int main()
{
        int N,freq[200001]={0},stack[200002]={0};
        scanf("%d",&N);
        pair arr[N];
        for(int i=0;i<N;i++)
        {
                scanf("%d %d",&arr[i].x,&arr[i].y);
                freq[arr[i].x+100000]++;
        }
        merge_sort(arr,N,0,N-1,1);
        /*for(int i=0;i<N;i++)
                printf("%d : %d %d\n",i,arr[i].x,arr[i].y);*/

        for(int i=0,t=1,sum=0;i<=200000;i++)
                if(freq[i]>0)
                {
                        sum+=freq[i];
                        stack[t++]=sum;
                }

        for(int i=0;stack[i+1]!='\0';i++)
        {
                merge_sort(arr,N,stack[i],stack[i+1]-1,0);
        }
        for(int i=0;i<N;i++)
                printf("%d %d\n",arr[i].x,arr[i].y);
}

void merge(pair *arr, int N, int first, int mid, int last, int type)
{
        if(type>0)//x
        {
                int x=first;
                pair tmp[N];
                int i=first;
                int j=mid+1;
                while(i<=mid&&j<=last)
                {
                        if(arr[i].x<arr[j].x)
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
        else//y
        {
                int x=first;
                pair tmp[N];
                int i=first;
                int j=mid+1;
                while(i<=mid&&j<=last)
                {
                        if(arr[i].y<arr[j].y)
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
}

void merge_sort(pair *arr,int N, int first, int last,int type)
{
        if(first==last) return;
        int mid=(first+last)/2;
        merge_sort(arr,N,first,mid,type);
        merge_sort(arr,N,mid+1,last,type);
        merge(arr,N,first,mid,last,type);
}
