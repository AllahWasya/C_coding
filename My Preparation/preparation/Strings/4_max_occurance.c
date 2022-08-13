#include<stdio.h>
void occurance(char str[])
{
   int x=0;
   int max=0;
   int count=0;
   int i=0;
   int count_arr[50];
   
    for (int i = 0; str[i] !='\0'; i++)
        {
             for (int j = i; str[j] !='\0'; j++)
             {
                if (str[i]==str[j])
                {
                    count++;
                }
                
             }
             count_arr[i]=count;
        }

max=count_arr[0];
for (int i = 0; i < 50; i++)
{
    if (count_arr[i]>max)
    {
       max==count_arr[i];
    }
    
}

printf("Maximu occurance is %d",max);

}
int main()
{
    char str[20]="wasaydhsya";
    occurance(str);
}