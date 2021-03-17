#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Insert a new node at any index within a list */

struct node* BuildOneTwoThree();
void SortedInsert(struct node** headRef, struct node* newNode);
void SortedInsertTest();
int Length(struct node* head);
void PrintList(struct node* head);

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	SortedInsertTest();
}

struct node* BuildOneTwoThree() 
{
	struct node *head, *second, *third;
	head = NULL;
	second = NULL;
	third = NULL;

	head =  malloc(sizeof(struct node));
	second =  malloc(sizeof(struct node));
	third =  malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

  third->data = 3;
	third->next = NULL;

	return head;
}

void SortedInsertTest() {
	struct node* test;
	struct node* new;

	new = malloc(sizeof(struct node));
	new->data = 0;
	new->next = NULL;

	test = BuildOneTwoThree();

	SortedInsert(&test, new);
	PrintList(test);

}
void SortedInsert(struct node** headRef, struct node* newNode) {
	/* insert into sorted linked list */
	struct node* current;
	int newVal;

	current = *headRef;
	newVal = newNode->data;

	if (*headRef == NULL || (*headRef)->data >= newVal) {
		newNode->next = *headRef;
		*headRef = newNode;
	}
  else {
		while (current->next != NULL && newVal > current->next->data)  
			current = current->next;
		newNode->next = current->next;	
		current->next = newNode;
	}
}

int Length(struct node* head) {
	/* length of a linked list */
	struct node* current = head;
	int len = 0;
	while (current != NULL) {
		len+=1;
		current = current->next;
	}
	return len;
}
void PrintList(struct node* head) {
	/* print linked list */
	struct node* current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
}
