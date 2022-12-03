#include<stdio.h>
int main()
{
    int i;
    char *strp;
    strp=(char*)calloc(20,sizeof(char));
    printf("enter you to text\n");
    gets(strp);
    printf("%s",strp);

}
