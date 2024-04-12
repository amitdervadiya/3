#include <stdio.h>
int cube(int *a)
{
    return *a * *a * *a;
}
main()
{
    int a;
    printf("enter value : ");
    scanf("%d", &a);
    printf("cube is  : %d", cube(&a));
}