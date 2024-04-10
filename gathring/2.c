#include <stdio.h>

calculateArea(int width, int length)
{
   int  area;
   area = length*width;
   return area;
}
main()
{
    int width, length;
    printf("enter value of width");
    scanf("%d", &width);
    printf("enter value of length");
    scanf("%d", &length);
    printf("%d",calculateArea(width, length));
}
