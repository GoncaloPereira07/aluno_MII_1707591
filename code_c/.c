#include <stdio.h>

int main()
{
    
    int n;
    int m;
    printf("\nIntroduza o tamanho do array de inteiros: ");
    scanf("%d%d",&n,&m);
    
    int a[n][m];
    int b[n][m];
    int c[n][m];
    
    
    printf("\n");
    for(int col=0;col<n;col++){
    for(int i=0;i<m;i++){
        printf("\n a[%d][%d]= ",i,col);
        scanf("%d",&a[i][col]);
        printf("\n b[%d][%d]= ",i,col);
        scanf("%d",&b[i][col]);
        c[i][col]=a[i][col]+b[i][col];
    }    
    printf("*****************\n");
    for(int col=0;col<n;col++)
    printf("\n");
    for(int j=0;j<m;j++)
        printf("c[%d][%d]=%d,",j,col,c[j][col]);
        
    }
    
    
    return 0;
}