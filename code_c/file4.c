// executado em ambiente windows
#include <stdio.h>
int main() {
 FILE *fp;
 fp = fopen("C:/Users/1707591/Desktop/portugal.txt", "w+");
 fprintf(fp, "Portugal jogou muito à bola\nPortugal destruiu a suiça\nPortugal teve muita posse de bola ");
 // fputs("This is testing for fputs...\n", fp);
 fclose(fp);
 return 0;
}