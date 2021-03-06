//Length

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct node {
	int key;
	struct node *next;
} node_t;

node_t *head = NULL;

int main(){
	int i, length;
	node_t *item;
	for (i = 0; i < 10; i++){
		item = malloc(sizeof(node_t));
		item->key = i << 1;
		item->next = NULL;
		SL_APPEND(head, item);
	}
	SL_FOREACH(head, item) printf("%d\n", item->key);
	SL_LENGTH(head, length);
	printf("Length is: %d\n", length);
	return 0;
}
