// executado em ambiente windows
#include <stdio.h>
int main() {
 FILE *fp;
 fp = fopen("C:/Users/1707591/Desktop/Noticía.txt", "w+");
 fprintf(fp, "Explosão de gás em prédio de Viana do Castelo faz um ferido grave\n");
 // fputs("This is testing for fputs...\n", fp);
 fclose(fp);
 return 0;
}