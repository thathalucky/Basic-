    #include <stdio.h>
    // Write a ncr format with inputs of n and r ;
    int main() {
    int n ;
    int r ;
    printf("Enter the value of n here\n ");
    scanf("%d",&n);
    printf("Enter the value of r here\n ");
    scanf("%d", &r);
    if(r>n){
        return 0 ;
    }
    int c = n-r ;
    printf(" n - r number is %d\n", c );

        int factorial1=1 ;  
    for ( int i = 1 ; i <= n  ; i++  ){
        factorial1*=i;
    }
    printf("n factorial is %d\n", factorial1);  
    
    
    
    int factorial2=1 ;  
    for ( int p = 1 ; p <= r  ; p++  ){
        factorial2*=p;
    }
    printf("r factorial is %d\n", factorial2);  

        int factorial3=1 ; 
    for ( int k = 1 ; k <= c  ; k++  ){
        factorial3*=k;
    }
    printf("n-r factorial is %d\n", factorial3);  

        int d = factorial1;
        int l= (factorial2) * (factorial3) ;
        int final = d/l;
        printf("The  value of nCr is %d", final);

        return 0;
    }