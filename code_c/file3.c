// executado em ambiente windows
#include <stdio.h>
int main() {
 FILE *fp;
 fp = fopen("C:/Users/1707591/Documents/prog1.txt", "w+");
 fprintf(fp, "Gonçalo Pereira,MII...\n");
 // fputs("This is testing for fputs...\n", fp);
 fclose(fp);
 return 0;
}