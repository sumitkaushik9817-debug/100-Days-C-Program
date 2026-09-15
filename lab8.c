#include <stdio.h>

int main()
{
    int a[2], i;

    printf("Enter two integers: ");
    
    for(i = 0; i < 2; i++)
    {
        scanf("%d", &a[i]);
    }

    if(a[0] > a[1])
    {
        printf("%d is greater", a[0]);
    }
    else if(a[1] > a[0])
    {
        printf("%d is greater", a[1]);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}