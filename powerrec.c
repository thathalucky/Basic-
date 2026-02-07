// Make a function which calculates a to the power raised with  b using recursions....

#include <stdio.h>
#include<math.h>

int power ( int a ,int b,int total );
int power (int a ,int b,int total ){
  
 
 if (b==1){
     return total ;
   }
  else {
       total = total * a ;
       return power(a,b-1,total);
   }
}


int main() {
    
int  a ;
printf("Enter the number a  : " );
scanf("%d" , &a);
int  b ;
printf("Enter the number b  : " );
scanf("%d" , &b);
if (b== 0 ) printf("1\n");
printf("%d",power(a,b,a));

    return 0;
}
