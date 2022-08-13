/////////////////// Pass By Value //////////////////////////
// #include <stdio.h>
// #include <string.h>
// int copy(int A)
// {
   
//    printf("Value of A is %d",++A);
    
// }
// int main()
// {
//     int a=45;
//     copy(a);
//     printf("\n");
//     printf("value of a is: %d",a);
    
// }

// /////////////////// Pass By Reference ///////////////////////
// #include <stdio.h>
// #include <string.h>
// int copy(int *A)
// {
   
//    printf("Value of A is %d",++*A);
    
// }
// int main()
// {
//     int a=45;
//     copy(&a);
//     printf("\n");
//     printf("value of a is: %d",a);
    
// }

/////////////////  Pass by Re without p ///////////////////////////

// #include <stdio.h>
// #include <string.h>
// void mystr_cpy(char str1[], char str2[])
// {
// int i=0;
//     while (str1[i] != '\0')
//     {
//        str2[i] =str1[i];
//        i++;
//     }  
//  }
// int main()
// {
//     char str1[20];
//     char str2[20];
//     printf("Enter the First string..");
//     scanf("%s",str1);
//    // fgets(str1,sizeof(str1),stdin);
//     mystr_cpy(str1,str2);
//     puts(str2);
// }

//////////////// Pass by Reference  //////////////////////////

// #include <stdio.h>
// #include <string.h>
// void mystr_cpy(char *str1, char *str2)
// {
// int i=0;
//     while (*(str1+i) != '\0')
//     {
//        *(str2+i) =*(str1+i);
//        i++;
//     }  
//  }
// int main()
// {
//     char str1[20];
//     char str2[20];
//     printf("Enter the First string..");
//     scanf("%s",str1);
//    // fgets(str1,sizeof(str1),stdin);
//     mystr_cpy(str1,str2);
//     puts(str2);
// }

////////////////   Pass By Value   ////////////////////////////

// #include <stdio.h>
// #include <string.h>
// int mystrcpy(int A[], int B[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//        B[i]=A[i];
//     }
    
// }
// int main()
// {
//     int arr1[5]={3,5,6,7,9};
//     int arr2[5];
//     // for (int i = 0; i < 5; i++)
//     // {
//     //        printf("Enter the First array ..");
//     //        scanf("%d",&arr1[i]);
//     // }
//     for (int i = 0; i < 5; i++)
//     { 
//         printf("%d ",arr1[i]);
//     }

//     printf("\n%p\n",arr1);

//     mystrcpy(arr1,arr2);
//    for (int i = 0; i < 5; i++)
//    {
//     printf("%d\n",arr2[i]);
//    }
// }
//////////////     Pass  by Reference     //////////////////// 

// #include <stdio.h>
// #include <string.h>
// int mystrcpy(int *A, int *B)
// {
//     for (int i = 0; i < 5; i++)
//     {
//        *(B+i)=*(A+i);
//     }
    
// }
// int main()
// {
//     int arr1[5]={3,5,6,7,9};
//     int arr2[5];
//     // for (int i = 0; i < 5; i++)
//     // {
//     //        printf("Enter the First array ..");
//     //        scanf("%d",&arr1[i]);
//     // }
//     for (int i = 0; i < 5; i++)
//     { 
//         printf("%d ",arr1[i]);
//     }

//     printf("\n%p\n",arr1);

//     mystrcpy(arr1,arr2);
//    for (int i = 0; i < 5; i++)
//    {
//     printf("%d\n",arr2[i]);
//    }
// }