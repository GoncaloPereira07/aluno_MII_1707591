#include <stdio.h>


int main()
{
    int dim;
    printf("introduza a dimensão da matriz: ");
    scanf("%d",&dim);
   
    int A[dim][dim];
    printf("\n");
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
        printf("\n A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
      } 
    }
    
    int trace=0;
    for(int i=0;i<dim;i++){
        
        trace=trace+A[i][i];
    }
    
    printf("\n trace(A)=%d",trace);

    return 0;
}