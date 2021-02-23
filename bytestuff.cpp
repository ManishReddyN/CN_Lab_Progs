#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    int i, n, j;
    char f, s, r;
    printf("Enter the size of the frame : ");
    scanf("%d", &n);
    scanf("%c", &r);
    n = n * 2;
    printf("\nEnter the characters in frame : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
        if (i == n - 1)
            scanf("%c", &r);
        printf("%c", a[i]);
    }
    printf("\n FRAME \n ");
    for (i = 0; i < n; i++)
        printf("%c", a[i]);
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 'f')
        {
            b[j] = 's';
            j++;
            b[j] = a[i];
        }
        else if (a[i] == 's')
        {
            b[j] = 's';
            j++;
            b[j] = a[i];
        }
        else
            b[j] = a[i];

        j++;
    }
    printf("\n RESULT \n");
    printf("f");
    for (i = 0; i < j; i++)
    {
        printf("%c", b[i]);
    }
    printf(" f");
}