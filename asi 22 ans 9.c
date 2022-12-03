#include<stdio.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    printf("enter the value of malloc");
    scanf("%d",p);
    if(p==NULL)
    {
        printf("memory allocation is faild");
    }
    return 0;
}
