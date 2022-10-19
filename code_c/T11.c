/******************************************************************************


                            Online C Compiler.

                Code, Compile, Run and Debug C program online.

Write your code in this editor and press "Run" button to compile and execute it.


*******************************************************************************/


#include <stdio.h>

unsigned long factorial(int num);

int main(){

 int numero;

 printf("\n CALCULO DO FACTORIAL \n");

 printf("\n Introduza um numero: ");

 printf("\n CALCULO DO FACTORIAL \n");

 scanf("%d",&numero);
 printf("%d!= %ld \n", numero,factorial(numero));

 return 0;

}

unsigned long factorial(int num){

 unsigned long res=1;

 for(; num>1;num--)

   res *=num; // abreviatura de, res =res * num;

  
 
return (res);

}

