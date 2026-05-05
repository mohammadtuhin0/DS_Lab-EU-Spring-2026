#include <stdio.h>

int main()
{
    int arr[10] = {13, 19, 21, 24, 27, 57, 63, 84, 93};
    int n = 9, trg = 23, l = 0, r = n - 1, pos = -1, comp = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        comp++;
        if (arr[mid] == trg)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] < trg)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (pos != -1)
    {
        printf("The target value is found and Position is %d.\nComparison : %d.\n", pos + 1, comp);
    }
    else
    {
        printf("The target value is not available on this array.\nComparison : %d.\n", comp);
    }

    return 0;
}