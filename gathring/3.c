#include <stdio.h>

fact(a)
{
    if (a == 1)
    {
        return 1;
    }
    else if (a <= 0)
    {
        return 0;
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
    if (fact(a)==0)
    {
        printf("invalid");
    }else{
        printf("%d", fact(a));
    }
}