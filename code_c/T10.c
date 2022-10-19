/******************************************************************************


                            Online C Compiler.

                Code, Compile, Run and Debug C program online.

Write your code in this editor and press "Run" button to compile and execute it.


*******************************************************************************/


#include <stdio.h>

int soma(int x, int y);


int main()

{

    
int u;

    int v;

    printf("\nintroduza um inteiro ");
    scanf("%d",&u);

    printf("\nintroduza um inteiro ");

    scanf("%d",&v);

    int w=soma (u,v);

    printf("\n a soma é---->%d",w);

    return 0;

}


int soma(int x,int y){

    
    return (x+y);

}