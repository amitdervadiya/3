#include <stdio.h>
min(int *a, int *b, int *c)
{
    int d;
    d = *a,*a = *b,*b = *c,*c = d;
     printf("after swaping : %d\n %d\n %d", *a, *b, *c);
 
}

main()
{
    int a, b, c;
    
    
    printf("enter value");
    scanf("%d", &a);

    scanf("%d", &b);

    scanf("%d", &c);

    printf("Before swaping : %d\n %d\n %d\n", a, b, c);
    min(&a, &b, &c);
}