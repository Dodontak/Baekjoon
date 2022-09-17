#include <stdio.h>

int main()
{
        int X,a,b,line=1,sum=1,n;
        scanf("%d",&X);
        while(X>sum)
        {
                line++;
                sum+=line;
        }
        n=X-(sum-line)-1;//X는 line번째 줄의n번 항이다.
        a=1+n;
        b=line-n;
        if(line%2==1)//홀수줄이라면 line(b)  분자 1(a)분모
                printf("%d/%d\n",b,a);
        else//짝수줄이라면 1(a)  분자 line(b)분모
                printf("%d/%d\n",a,b);
        //printf("X는 %d번째 줄 %d번째 항이다\n",line,X-(sum-line)-1);
        return 0;
}
