#include <stdio.h>
int addNumbers(int a, int b) {
   int carry = (a & b) << 1;
   int result = a^b;
   if (carry == 0)
      return result;
   else
      addNumbers(carry, result);
}
int main(){
   int a = 54, b = 897;
   printf("The sum of %d and %d using bitwise adding is %d", a, b, addNumbers(a, b));
}