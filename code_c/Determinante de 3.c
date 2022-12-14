#include <stdio.h>

int main()
{
    int dim=3;
    int A[dim][dim];
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            printf("\n A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("\n*******************************************\n");
    int determinante=A[0][0]*A[1][1]*A[2][2]+A[0][1]*A[1][2]*A[2][0]+A[0][2]*A[1][0]*A[2][1]-A[0][2]*A[1][1]*A[2][0]-A[0][0]*A[1][2]*A[2][1]-A[0][1]*A[1][0]*A[2][2];
    printf("det(A)=%d",determinante);

    return 0;
}