// Print sum of 1 to n ( Return type ).....
#include <stdio.h>
int sum(int n,int s){
    if (n==1) return s + 1 ;
    else {
        sum(n - 1,s + n);
    }
    
}


int main() {
    
int  n ;
printf("Enter the number : " );
scanf("%d" , &n);
int add = sum(n,0);
printf("%d",add);

    return 0;
}