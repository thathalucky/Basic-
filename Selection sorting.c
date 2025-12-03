#include<stdio.h>

int min(int a[],int i,int n){
    int q;
    int sum=0;
    for(int k = i  ; k < n ; k++){
     sum+=a[k];
   }

   int p=0;
   while(p<=sum){
    for(q = i ; q < n ; q++){
     if(p==a[q]) return q ;

    }
    p++;
  }
}

int main (){

    int n = 6;
    int  arr[n];
    for(int i = 0 ; i < n ; i++ ){

        printf("Enter the element of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ; i++  ){
      int mini = min(arr,i,n);      
          if(arr[i]>arr[mini]){
            int temp = 0 ;
            temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp ;
          }
    }



    for ( int y = 0 ; y < n ; y++){
        printf("Element in Array[%d]= %d\n",y,arr[y]);
    }







}
