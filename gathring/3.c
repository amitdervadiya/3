#include <stdio.h>

calculateFactorial(a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a *= fact(a - 1);
    }
}
main()
{
    int a;
    printf("enter value");
    scanf("%d", &a);
    printf("%d", calculateFactorial(a));
}
