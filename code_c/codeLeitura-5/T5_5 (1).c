#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fun1();
int fun2();

int main(){
	for(int i=0;i<10;i++){
		printf("\nvalor func1(), %d",fun1());
		printf("\nvalor func2(), %d",fun2());
	}

}

int fun1(){
	static int count1=0;
	return count1++;
}

int fun2(){
	int count2=0;
	return count2++;
}
