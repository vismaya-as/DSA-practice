#include <stdio.h>
#include <stdlib.h>
int calculator(int *px, int *py,char s)
{
    if(s=='+')
    {
        return *px + *py;
    }
    else if(s=='-')
    {
        return *px - *py;
    }
    else if(s=='x')
    {
        return *px * *py;
    }
    else{
        return *px / *py;
    }
}
int main()
{
    char op;
    int *x=malloc(sizeof(int));
    int *y=malloc(sizeof(int));
    printf("enter 1:");
    scanf("%d",x);
    printf("enter 2:");
    scanf("%d",y);
    printf("operation:");
    scanf(" %c",&op);
    printf("%d",calculator(x,y,op));
    return 0;
}
