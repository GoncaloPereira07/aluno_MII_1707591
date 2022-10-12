/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     // Variaveis
    /*
    tipos de variaveis
    int - variaveis do tipo inteiro (whole numbers), exemplo: -123
    float - variaveis float, representa numeros com decimais, exemplo: 19.99, -21.05, 2.00
    char - variaveis do tipo caracter, exemplo: 'a', 'B'. (tabela ascii)
    
    */
    
    /*
    Declaração das variáveis:
    Uma variável tem tipo, nome, valor, e existe num endereço de memória
    i) type <nome_variavel> = value;
    ou
    ii)  type <nome_variavel>;
         <nome_variavel>= value;
    
    */
    
    int myNum1 = 15;
   
    int myNum2;
    myNum2 = 17;
    
    // output, primeiro 15, proximo 17
    printf("primeiro %d, proximo %d\n",myNum1,myNum2);
    
    // endereço de memória da vairavel myNum1
    printf("valor da variável myNum1 --> %d\nendereço de memória da variavel myNum1 --> %p\n",myNum1,&myNum1);
    
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("\n o meu numero myNum %d, o meu float myFloatNum %f", myNum, myFloatNum);
    printf("\n a minha letra myLetter é %c", myLetter);
    
    // soma
    // a variavel é inteiro, o seu nome é x, o seu valor é 5
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);
  
    return 0;
}
