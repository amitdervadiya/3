#include <stdio.h>

calculateSumOfSquares(int a)
{
 
   
    if(a %2==0){
  
        return (a*a);
    }
    else{
        return 0;
    }
   }
   

main()
{
    int a,sum;
    printf("enter value ");
    scanf("%d", &a);
 for (int i = 1; i < a; i++)
 {
    sum+= calculateSumOfSquares(i);
 }
printf("sum of even numbers square%d",sum);
}
