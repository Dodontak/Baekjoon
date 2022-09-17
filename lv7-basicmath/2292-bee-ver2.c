#include <stdio.h>

int k(int n);

int main()
{
        int N,line=1,sum=1;
        scanf("%d",&N);
        while(N>sum)
        {
                sum+=line*6;
                line++;
        }
        printf("%d",line);
}
