// executado em ambiente windows
#include <stdio.h>
int main() {
 FILE *fp;
 fp = fopen("C:/Users/1707591/Desktop/Notic�a.txt", "w+");
 fprintf(fp, "Explos�o de g�s em pr�dio de Viana do Castelo faz um ferido grave\n");
 // fputs("This is testing for fputs...\n", fp);
 fclose(fp);
 return 0;
}