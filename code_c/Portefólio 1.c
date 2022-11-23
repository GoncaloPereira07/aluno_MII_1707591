#include <stdio.h>


int main()

{

    char x='a';

    printf("Hello world1, %d",x);

    printf("\nHello world2, %c",x);

    printf("\a");

    

    int num1, num2;

    printf("\nIntroduza dois número: \n");

    scanf("%d%d",&num1,&num2);

    printf("\no numero introduzido foi %d ",num1+num2);

    
    
    
    
    

    int i;

    printf("\nTodos os numeros divisiveis por 3 entre 100 e 200:\n\n");

    for(i=102; i<200 && i>100; i=i+3){

        if(i%200==0) break;

        printf("%d\n",i);

    }

    
    return 0;

}
