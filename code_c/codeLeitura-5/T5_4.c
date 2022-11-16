#include <stdio.h>
int main()
{
	register int  miles=21;
        for (int i = 1; i < 11; ++i)
	{
		printf("%d ", i);
		printf("%d ",miles);
		miles++;
		printf("\n");
	}
	return 0;
}