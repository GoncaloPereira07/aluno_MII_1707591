/******************************************************************************


                            Online C Compiler.

                Code, Compile, Run and Debug C program online.

Write your code in this editor and press "Run" button to compile and execute it.


*******************************************************************************/


#include <stdio.h>


int main()

{

 int ano;

 printf("\n Qual o ano que pretende testar: ");

 scanf("%d",&ano);

 if ((ano%400==0) || (ano%4==0 && ano%100!=0)){

    printf("\n O ano de %d É bissexto \n ",ano);

 }else{

    printf(" \n O ano de %d NÃO é bissexto \n ",ano);

 }

 return 0;

}
