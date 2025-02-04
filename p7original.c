#include <stdio.h>

int input();

void arrInput();
int arrSum(int n, int a[n]);
int output(int n, int a[n], int sum);

int main()
{
    int n, ans;

    n = input();

    int arr[n];

    arrInput(n, arr);
    ans = arrSum(n, arr);

    output(n, arr, ans);
}

int input()
{
    int a;

    printf("Enter array length: ");
    scanf("%d", &a);

    return a;
}

void arrInput(int n, int arr[n])
{
    int i;

    printf("Enter Array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int arrSum(int n, int arr[n])
{
    int sum =0 ;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int output(int n, int arr[n], int sum)
{
    printf("\nThe contents of the array are: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\n\nHence, The sum of numbers in the array = %d", sum);
}
