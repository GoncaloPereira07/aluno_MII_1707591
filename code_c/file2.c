// executado em ambiente windows
#include <stdio.h>
int main() {
 FILE *fp;
 fp = fopen("./program2.txt", "w+");
 fprintf(fp, "Gonçalo Pereira,MII...\n");
 // fputs("This is testing for fputs...\n", fp);
 fclose(fp);
 return 0;
}