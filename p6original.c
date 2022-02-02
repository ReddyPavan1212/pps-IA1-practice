#include <stdio.h>
#include <stdlib.h>

int input();
int sum_of_n_numbers(int n);
void output(int n, int sum);

int main()
{
    int n = input();
    int ans = sum_of_n_numbers(n);
    
    output(n, ans);
    
    
   return 0;
}

int input(int x)
{
    printf("Enter number n = ");
    scanf("%d", &x);
    return x;
}

int sum_of_n_numbers(int n)
{
  int i = 1;
  int sum = 0;
  while (i <= n)
    {
      sum += i;
      ++i;
    }
  return sum;
}

void output(int n, int sum)
{
  printf("Sum of %d natural numbers = %d", n, sum);
}
