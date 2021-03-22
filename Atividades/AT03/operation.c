#include<stdio.h>
#include "plus.h"
#include<stdlib.h>
int main(){
	int plus,plus1;
	int f;
	
	printf("Insira o primeiro valor:\n");
	scanf("%d",&plus);
	
	printf("Insira o segundo valor:\n");
	scanf("%d",&plus1);
	
	f=numbers( plus, plus1);
	
	printf("resultado : %d\n",f);
	
	return 0;
}