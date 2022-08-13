/*
Author: Allah Wasaya
Company: AQL Tech Solution
*/
#include<stdio.h>
#include <string.h>
void check_palendrom(char str[],int ind)
{
    int len = strlen(str)-(ind+1);          // 1st_iter suppose string is "rotator" then, len=8-(0+1)=7 // 2nd_itr: len=8-2=6 //
    if (str[ind] == str[len])
    {
        if ((ind + 1) == len || (ind == len))   // 0+1 = 1  ||  0 == 7 ? // 2nd iter: 1+1 == 6 || 1 == 6 // 2+1, 2 == 5 // 3+1==4 || 3 ==4? Yes it is ! 
        {
           printf("String is Palendrome ");    
           return;
        }
        check_palendrom(str,ind+1);           // (str, 0+1)
    }
    else
    {
           printf("String is not Palendrome ");
    }
}
int main()
{
    char str[15];
    int first_index =0;
    printf("\n");
    printf("Checking Either the String is Palendrom or Not!\n");
    printf("===============================================\n");
    printf("Enter any string : ");
    scanf("%s",str);
    check_palendrom(str,0);
    return 0;
}











