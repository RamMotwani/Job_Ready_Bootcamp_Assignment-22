#include<stdio.h>
int main()
{
    int n,*p,i,a=0;
    printf("how many values you want to enter\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter %d values\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        a=*(p+i)+a;
    }
    free(p);
    printf("average of %d values is %d",n,a/n);
    return 0;

}
