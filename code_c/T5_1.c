#include <stdio.h>
#include <stdlib.h>
void main ()
{
	char* a;
	a="IPG-Guarda";
	printf("%d,%s",atoi("12345"),*&a);
}
