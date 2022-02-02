#include <stdio.h>

int input();
int largest(int x, int y, int z, int *large);
int output(int x, int y, int z, int result);

int main()
{
    int *big;
    int a = input();
    int b = input();
    int c = input();

    int ans = largest(a, b, c, &big); 

    output(a, b, c, ans);

    return 0;
}

int input(int x)
{
    printf("Enter number = ");
    scanf("%d", &x);
    return x;
}

int largest(int x, int y, int z, int *large)
{
    if (x >= y && x >= z)
        *large = x;

    if (y >= x && y >= z)
        *large = y;

    if (z >= x && z >= y)
        *large = z;

    return *large;
}


int output(int x, int y, int z, int result)
{
    printf("\nLargest Number among %d, %d, %d = %d", x, y, z, result);
}
