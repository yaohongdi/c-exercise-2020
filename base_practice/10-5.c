#include<stdio.h>

int main()
{
    int a[10];
    int i;

    printf("please enter 10 integer number:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    return 0;
}

