#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int index = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}