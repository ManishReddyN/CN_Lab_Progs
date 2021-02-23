#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[20], b[50], i, j, k, count, n;
    printf("Enter frame size (Example: 8):");
    cin >> n;
    printf("Enter the binary form of frame:\n");
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0;
    count = 1;
    j = 0;
    while (i < n)
    {
        if (a[i] == 1)
        {
            b[j] = a[i];
            //Here the limit is 5.
            for (k = i + 1; a[k] == 1 && k < n && count < 5; k++)
            {
                j++;
                b[j] = a[k];
                count++;
                if (count == 5)
                {
                    j++;
                    b[j] = 0;
                }
                i = k;
            }
            count = 1;
        }
        else
        {
            b[j] = a[i];
        }
        i++;
        j++;
    }
    printf("After Bit Stuffing :");
    for (i = 0; i < j; i++)
        cout << b[i] << " ";
    cout << "\n";
    return 0;
}