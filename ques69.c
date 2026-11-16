#include <stdio.h>

int main()
{
    int a[100], n, key, i;
    int low, high, mid, index = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            index = mid;
            break;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}