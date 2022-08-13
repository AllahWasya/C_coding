#include<stdio.h>
int main(){

int i1[4]={5,6,7,8};
//*i1++;
int *iptr ;
iptr=i1;
printf("%d",*iptr);
printf("\n");
printf("%p",i1);
printf("\n");
printf("%d",*iptr+1);
printf("\n");
printf("%d",*(iptr+10));
printf("\n");
//   int *p;
//   int x;
//   p=&x;
//   printf("Address : %p\n",p); // address
//   printf("value : %d\n",*p); // garbage value
//   printf("Address : %p\n",&p); // Address of pointor that is storing the address of variable x
//   x=77;                       // replcing actual value 
//   printf("value : %d\n",*p); // Now checking value at address x
//   printf("Address : %p\n",p); // same address
//   *p=99;                      // replacing value at address
//   printf("value : %d\n",*p); // replacing value using pointors
//   printf("Address : %p\n",p); // same address
//   *p=*p+1;
//   printf("value : %d\n",*p); // replacing value using pointors
//   printf("Address : %p\n",p); // same address
//   *p=*(p+3);
//   printf("value : %d\n",*p); // replacing value using pointors
//   printf("Address : %p\n",p); // same address
//   printf("Address %p\n", p+1);
}