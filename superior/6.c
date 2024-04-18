#include <stdio.h>
void main()
{
    int size1,size2;
    printf("Enter size of array_1 : ");
    scanf("%d",&size1);
    printf("Enter size of array_2 : ");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2],arr3[size1+size2];
    for (int i = 0; i < size1; i++){
        printf("Enter number for arr_1[%d] : ",i);
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < size2; i++){
        printf("Enter number for arr_2[%d] : ",i);
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < size1+size2; i++){
        if(i<size1){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[i-size1];
        }
    }
    printf("Array_3 : ");
    for (int i = 0; i < size1+size2; i++){
        if (i == size1+size2-1)
        {
            printf("%d", arr3[i]);
        }
        else
        {
            printf("%d, ", arr3[i]);
        }
    }
    main();
}