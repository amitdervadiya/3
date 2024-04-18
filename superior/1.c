#include<stdio.h>
void main(){
    int arr[5],sum=0;


    for (int i = 0; i < 5; i++)
    {
           printf("enter elements of array ");
           scanf("%d",&arr[i]);
      
    }
     for (int i = 0; i < 5; i++)
    {sum+=arr[i];
         
      
    }
     printf("%d\n",sum);
    
}