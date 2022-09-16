#include <stdio.h>

int main()
{
        int N,count,change,n,sum=0;
        char s[100];
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
                scanf("%s",s);
                int a[26]={0};
                count=0;
                change=0;
                n=0;
                while(s[n]!='\0')
                {
                        a[s[n]-'a']++;
                        n++;
                }
                for(int j=0;j<26;j++)
                        if(a[j]>0) count++;//몇가지 알파뱃 썻는지 count에 저장
                n=0;
                while(s[n]!='\0')
                {
                        if(s[n]!=s[n+1])
                        {
                                change++;//알파뱃 몇번 바뀌는지 저장
                        }
                        n++;
                }
                if(count==change) sum++;
        }
        printf("%d",sum);
}

