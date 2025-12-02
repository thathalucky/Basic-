#include<stdio.h>
#define M 100
#define N 100
int main (){

    int A[M][N],B[M][N];
    int r1,c1,r2,c2;
printf("Enter the rows and column of Matrix A : ");
scanf("%d%d",&r1,&c1);
A[r1][c1];
    printf("\nEnter the Elements in the matrix A :  ");
     for (int i = 0 ; i< r1 ; i++){
         for (int j = 0; j < c1; j++)
         {
            printf("Enter the Element in A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
         }
         printf("\n");
         
     }

printf("Enter the number of Rows and columns in Matrix B : ");
scanf("%d%d",&r2,&c2);
B[r2][c2];

  printf("\nEnter the Elements in the matrix B :  ");
     for (int i = 0 ; i<r2 ; i++){
         for (int j = 0; j < c2 ; j++)
         {
            printf("Enter the Element in B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
         }
         printf("\n");
     }



int C[r1][c2];

if(r2==c1){


for(int i = 0 ;i<r1;i++){
    int k=0;
    
     while (k<c2)
     {  
         
             int sum=0;
         for (int  j = 0  ; j < r2  ; j++)
        {
        
            sum+=(A[i][j])*(B[j][k]);
           
        
        }
        C[i][k]=sum;
        k++;
    
     }
     
 

}
printf("Matrix C is :\n");
for (int  i = 0; i < r1; i++)
{
    for (int j = 0; j < c2 ; j++)
    {
        printf(" %d",C[i][j]);
    }
    printf("\n");
}

}
else printf("Multiplication of the given two matrices is not possible");






return 0 ;

}




