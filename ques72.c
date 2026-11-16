#include <stdio.h>

int main()
{
    int a[100], n, value, i, pos = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    for(i = 0; i < n; i++)
    {
        if(a[i] == value)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("-1");
    }
    else
    {
        for(i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        for(i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}