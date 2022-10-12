/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    // Limites valores dos tipos de dados Operadores Aritméticos
    printf("limite "); 
    printf("\n%d",CHAR_BIT);
    printf("\n%d",CHAR_MAX);
    printf("\n%d",CHAR_MIN);
    
    printf("\n%d",INT_MAX);
    printf("\n%d",INT_MIN);
    
    printf("\n%ld", (long)LONG_MAX);
    printf("\n%ld",(long) LONG_MIN);
    
    printf("\n%d",SCHAR_MAX);
    printf("\n%d",SCHAR_MIN);
    
    printf("\n%d",SHRT_MAX);
    printf("\n%d",SHRT_MIN);
    
    printf("\n%d",UCHAR_MAX);

    printf("\n%u",(unsigned int) UINT_MAX);
    printf("\n%lu",(unsigned long) ULONG_MAX);
    printf("\n%d",(unsigned short) USHRT_MAX);
    
    int x1=2147483645;
    int x2=x1+1;
    int x3=x2+1;
    int x4=x3+1;
    printf("\nx1=%d ",x1);
    printf("\nx2=%d ",x2);
    printf("\nx3=%d ",x3);
    printf("\nx4=%d ",x4);
    return 0;
}
