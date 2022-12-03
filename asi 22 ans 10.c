#include<stdio.h>
int main()
{
    int *p,max,min,i;
    p=(int*)malloc(5*sizeof(int));
    printf("enter 5 values in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    max=*p;
    min=*p;
    for(i=0;i<5;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
        if(min>*(p+i))
        {
            min=*(p+i);
        }
    }
    free(p);
    printf("%d is maximum & %d is minimum\n",max,min);
}
