// executado em ambiente windows
#include <stdio.h>
int main() {
 FILE *fp;
 fp = fopen("./program1.txt", "w+");
 fprintf(fp, "This is testing for ...\n");
 // fputs("This is testing for fputs...\n", fp);
 fclose(fp);
 return 0;
}