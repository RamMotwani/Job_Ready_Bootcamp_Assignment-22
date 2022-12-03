#include<stdio.h>
int main()
{
    char *strp,c;
    strp=(char*)malloc(sizeof(char));
    printf("enter a string\n");
    int i=0,j=1;
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        strp=(char*)realloc(strp,j*sizeof(char));
        *(strp+i)=c;
        i++;
    }
    *(strp+i)='\0';
    printf("%s",strp);
}
