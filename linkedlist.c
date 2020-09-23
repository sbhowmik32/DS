#include<stdio.h>
#include<stdlib.h>

struct LinkedList{
	int value;
	struct LinkedList *next;
};

int main(){
	struct LinkedList *a = (struct LinkedList*) malloc(sizeof(struct LinkedList));
	struct LinkedList *b = (struct LinkedList*) malloc(sizeof(struct LinkedList));

	a->value = 10;
	b->value = 20;
	a->next = b;
	b->next = NULL;

	while(a != NULL){
		printf("%d \n", a->value);
		a = a->next;
	}
	return 0;
}
