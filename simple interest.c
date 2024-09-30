#include<stdio.h>
int main()
{
    int p,n,r;
    float si;
    scanf("%d%d%d",&p,&n,&r);
    si=p*n*r/100.0;
    printf("%.2f",si);
    return 0;
}
