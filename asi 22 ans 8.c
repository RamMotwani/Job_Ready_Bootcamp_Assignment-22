#include<stdio.h>
int main()
{
    int *p,a=1;
    p=(int*)malloc(sizeof(int));
    printf("enter a no. in malloc variable");
    scanf("%d",p);
    a=*p+a;
    free(p);
    //here now malloc variable destroy and p pointer points nothing so p is dangling pointer.

}
