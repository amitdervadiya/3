#include <stdio.h>
void main()
{

    int n, sum;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is:%d",n, sum);
}