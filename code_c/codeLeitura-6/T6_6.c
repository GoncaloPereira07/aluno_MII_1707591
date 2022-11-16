#include <stdio.h>
int main () {
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	printf("Greeting message: %s,%p\n",greeting,greeting);
	return 0;
}