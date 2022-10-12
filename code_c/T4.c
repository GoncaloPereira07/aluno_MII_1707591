/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define x6 45
#define PI 3.14

int main()
{
     // Variaveis
    /*
    tipos de dados: 
     1- bit (tensão 1 - sem tensão 0), 1 - Byte= 8 bits 
     
    tipos de variaveis
    int - variaveis do tipo inteiro, 2 a 4 Bytes
    unsigned int
    float - variaveis float, 4 Bytes
    double - variavel double, representa decimais (como float), exemplo 12.23, 8 Bytes 
    char - variaveis do tipo caracter, 1 Byte (tabela ascii)
    
    */
    
    /*
    formato dos dados
    
    %d ou % i - int
    %ld - unsigned int
    %f - float
    %lf - double
    %c - caracter
    %s - string 
    Uma string é marcada por aspas "" e um caracter por plicas ''
    */
    
    char x1='A'; // 'A' corresponde a 65 na tabelas ascii (ver)
    
    int x2=23;
    float x3=21.02;
    double x4=43.212;
    unsigned int x8=23;
    
    //  sizeof() indica o espaço de armazeamento em inteiros sem sinal
    // formato de saida dos inteiros sem sinal %ld
    printf("\nx1= %c, espaço reservado armazenamento, para caracter, %ld",x1,sizeof(x1));
    printf("\nx1= %d",x1);
    
    printf("\nx3= %f, espaço reservado armazenamento, para float, %ld",x3,sizeof(x3));
    printf("\nx4= %lf, espaço reservado armazenamento, para double, %ld",x4,sizeof(x4));
    printf("\nx8= %d, espaço reservado armazenamento, para unsigned int, %ld",x8,sizeof(x8));
    // declaracao constante
    const int x5 = 15; 
    
    printf("\nvalor da constante x5 %d",x5);
    printf("\nvalor da constante x6 %d",x6);
    printf("\nvalor da constante PI %lf",PI);
    return 0;
}