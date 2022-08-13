/*

Pass array in function as an argument 

*/

// #include<stdio.h>
// void sumarr(int arr[], int size)
// {
//     int sum=0;
//     for (int i = 0; i < size; i++)
//     {
//         sum=sum+arr[i];
//     }
//     printf("Sum of array elements : %d\n",sum);
// }
// int main()
// {
//    int arr[] = {3,6,7,8,4};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    sumarr(arr,size);

// }


//////////////////////////////////////////////////////////


// #include<stdio.h>
// int sumarr(int *p, int size)
// {
//     int sum=0;
//     for (int i = 0; i < size; i++)
//     {
//         sum=sum+*(p+i);
//     }
//     return sum;
    
    
// }
// int main()
// {
//    int arr[] = {3,6,7,8,4};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    int result = sumarr(arr,size);
//    printf("Sum of array elements : %d\n",result);

// }

//////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int sumarr(int *p,int size)
// {
//     int sum=0;
  
//     for (int i = 0; i < size; i++)
//     {
//         *(p+i) =2*(*(p+i));
//     }
// }
// int main()
// {
//    int arr[] = {3,6,7,8,4};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    sumarr(arr,size);
//    for (size_t i = 0; i < size; i++)
//    {
//    printf("values in array are: %d\n",arr[i]);
//    }
   
// }