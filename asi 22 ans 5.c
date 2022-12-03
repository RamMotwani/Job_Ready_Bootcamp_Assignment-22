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
    printf("these are the values you entered\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    printf("sum of these values are %d",s);
    return 0;
}

