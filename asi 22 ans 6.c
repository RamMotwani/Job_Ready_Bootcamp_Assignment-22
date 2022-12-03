#include<stdio.h>
int main()
{
    int i,max,*p;
    p=(int*)malloc(5*sizeof(int));
    printf("enter 5 elements to find largest\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    max=*p;
    for(i=1;i<5;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    free(p);
    printf("largest element is %d\n",max);

}
