#include<stdio.h>
void leak();
int main()
{
    printf("Demonstrate Memory Leak");
    leak();
}
void leak()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    printf("enter the value in malloc variable");
    scanf("%d",p);
    printf("value of malloc variable is %d",*p);
}
//after the work of function finished pointer p is destroyed and after that we can not access the malloc variable coz its address lost in memory.
