
#include<stdio.h>
void main(){
    int i=0,n,temp,temp1=2;
    printf("Please give input a number: ");
    scanf("%d",&n);
    while(temp1<=n){
        temp=0;
        for(i=2;i<=(temp1/2);i++){
        if(temp1%i==0)
        {
            temp=1;
            break;
        }
    }
    if(temp==0)
        printf("%d is  a prime number \n",temp1);
    temp1++;
    }
}