#include <stdio.h>
#include <stdlib.h>
int main()
{
 char *num;
 FILE *fptr;
 if ((fptr = fopen("C:/Users/1707591/Desktop.txt","r")) == NULL){
 printf("Error! opening file");
 exit(1);
 }
 fscanf(fptr,"%s", num);
 printf("\nValue of n=%s", num);
 fclose(fptr);
 return 0;
}