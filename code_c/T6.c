/******************************************************************************


                            Online C Compiler.
                
Code, Compile, Run and Debug C program online.

Write your code in this editor and press "Run" button to compile and execute it.


*******************************************************************************/


#include <stdio.h>

int main()

{
    
  int x1, x2;

  printf("Introduza um inteiro, x1: ");
    
  scanf("%d",&x1);

  printf("\nIntroduza um inteiro, x2: ");

  scanf("%d",&x2);

  if(x1<x2){

     printf("x2 é maior que x1");
   }
    
   else{
        
       if(x1==x2){
            
           printf("x1 é igual a 2");

        }

        else{

            printf("x1 é maior que x2");

        }

    }


    return 0;

}
