#include <stdio.h>

#include <math.h>

unsigned long multPar(int n);

unsigned long soma(int n);

unsigned long somaPar(int n);

int main()

{

 int x;
 
 printf("Introduza um numero:");

 scanf("%d",&x);

 printf("%ld",multPar(x));

 printf("\n%ld",soma(x));

 printf("\n%ld",somaPar(x));

 return 0;

}

unsigned long multPar(int n){

 if(n>1) return 2*n*multPar(n-1);

 else return 2;

}


unsigned long soma(int n){

 if(n>1) return n+soma(n-1);

 else return 1;

}



unsigned long somaPar(int n){

 if(n>1) return 2*n+somaPar(n-1);

 else return 2;

}
