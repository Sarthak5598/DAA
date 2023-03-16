#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("ENTER NUMBER OF CASES YOU WANT TO CHECK");
    scanf("%d", &n);
    // For loop t input n arrays from user
    for (int i = 0; i < n; i++)
    {
        int c = 0, key = 0, m = 0;
        printf("ENTER SIZE OF ARRAY");
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            printf("Enter element %d of the array", j);
            scanf("%d", &arr[j]);
        }
        printf("Enter the elemnt you want to find");
        scanf("%d", &key);
        for (int j = 0; j < m; j++)
        {
            if (arr[j] == key)
            {
                printf("%d is found at %d\n", key, j);
                c++;
            }
        }

        if (c == 0)
        {
            printf("%d not found\n", key);
        }
    }
}
