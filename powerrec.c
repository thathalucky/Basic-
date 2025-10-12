// Make a function which calculates a to the power raised with  b using recursions....

#include <stdio.h>
#include<math.h>

int power ( int a ,int b );
int power (int a ,int b ){
    
 if (b==1){
     return a*b ;
   }
  else {

int add = power(a , b - 1);
 int total = add*a ;
      
  }
}


int main() {
    
int  a ;
printf("Enter the number a  : " );
scanf("%d" , &a);
int  b ;
printf("Enter the number b  : " );
scanf("%d" , &b);

int power11 = power(a,b);
printf("%d",power11);

    return 0;
}