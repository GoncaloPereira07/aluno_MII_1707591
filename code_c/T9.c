/******************************************************************************


                            Online C Compiler.

                Code, Compile, Run and Debug C program online.

Write your code in this editor and press "Run" button to compile and execute it.


*******************************************************************************/


# include <stdio.h>

int le_digito(); // protótipo de função




int main(){

 int c;

 c=le_digito();

 printf("O digito lido foi %c com codigo ASCII %d ",c,c);

 return 0;

}


int le_digito(){

 int c;

  printf("escreva um caracter: ");

 do{

    c=getchar(); // retorna o valor inteiro na

        // tabela ascii do caracter introduzido

 }while (c<'0' || c>'9');

 return c;

}
