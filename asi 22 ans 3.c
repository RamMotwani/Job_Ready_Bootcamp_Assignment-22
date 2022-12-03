#include<stdio.h>
int main()
{
    int i,n,s=0,*p;
    printf("enter how many no.s you wants to add\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        s=*(p+i)+s;
    }
    free(p);
    printf("sum of %d numbers is %d\n",n,s);
    return 0;
}
