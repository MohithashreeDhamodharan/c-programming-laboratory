#include<stdio.h>
int main()
{
    int l,b;
    scanf("%d%d",&l,&b);
    int area=l*b;
    printf("area:%d\n",area);
    int p=2*(l+b);
    printf("perimeter:%d",p);
    return 0;
}
