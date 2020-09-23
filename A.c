#include<stdio.h>

void f1(int a){
	a = 1;
}

void f2(int *a){
	*a = 2;
}

int main(){
	int a = 10;
	//f1(a);
	int b = a;
	b = 1;
	printf("%d\n",a);
	//f2(&a);
	int *c = &a;
	f2(c);
	printf("%d\n",a);
	return 0;
}
