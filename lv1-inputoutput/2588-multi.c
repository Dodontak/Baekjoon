#include <stdio.h>
int main(void)
{
    int a,b,c1,c2,c3;
    scanf("%d %d",&a,&b);
    c1=a*(b%10);
    c2=a*(b%100-b%10)/10;
    c3=a*(b-b%100)/100;
    printf("%d\n",c1);
    printf("%d\n",c2);
    printf("%d\n",c3);
    printf("%d\n",c1+10*c2+100*c3);
    return 0;
}
