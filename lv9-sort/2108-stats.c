//틀렸는데 어디가 틀렸는지 모르겠다~ 그냥 재끼자~
#include <stdio.h>
#include <math.h>

void merge(int *arr,int N, int first, int mid, int last);
void merge_sort(int *arr,int N, int first, int last);

int main()
{
        int N,sum=0,most_freq=0,a,b,count=0;
        scanf("%d",&N);
        int arr[N],freq[8001]={0};
        for(int i=0;i<N;i++)
        {
                scanf("%d",&arr[i]);
                sum+=arr[i];//반올림평균을 위한 sum
                freq[arr[i]+4000]++;//빈도 확인을 위한 배열
        }

        merge_sort(arr,N,0,N-1);//정렬
        //산술평균
        printf("%.0f\n",round((double)sum/N));
        //중앙값
        printf("%d\n",arr[N/2]);
        //최빈값
        for(int i=8000;i>=0;i--)
        {
                if(freq[i]>0&&freq[i]>most_freq)//기존 최빈값 빈도보다 새로운 값의 더 빈도가 높을 경우
                {
                        most_freq=freq[i];//최빈값의 빈도수 저장
                        a=i-4000;//최빈값 a에 저장
                        count=0;//카운트 초기화
                }
                else if(freq[i]>0&&freq[i]==most_freq)//기존 최빈값 빈도와 새로운 값의 빈도가 같을경우
                {
                        b=a;//기존 최빈값(새로운값보다 더 크다) b에 저장
                        a=i-4000;//새로운 최빈값 a에 저장
                        count++;//카운트 +1
                }
        }
        if(count>0) printf("%d\n",b);//최빈값 여러개 있을 경우 두번째로 작은 값 출력
        else if(count==0) printf("%d\n",a);//최빈값이 하나일 경우 그냥 출력
        //범위
        printf("%d\n",arr[N-1]-arr[0]);
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
