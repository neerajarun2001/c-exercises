#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Insert a new node at any index within a list */

struct node* BuildOneTwoThree();
void InsertNth(struct node** headRef, int idx, int val);
void InsertNthTest();
void DeleteList(struct node** headRef);
int Length(struct node* head);
void PrintList(struct node* head);

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	InsertNthTest();
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

void InsertNthTest() {
	struct node* head = NULL;

	InsertNth(&head, 0, 13);
	InsertNth(&head, 1, 42);
	InsertNth(&head, 1, 5);
	PrintList(head);
	printf("%s\n", "Tests passed.");

	DeleteList(&head);

}

void InsertNth(struct node** headRef, int idx, int val) {
	struct node* head;
	struct node* new = malloc(sizeof(struct node));

	head = *headRef;
	assert(idx <= Length(head));

	new->data = val;

	while (idx > 1) {
		head = head->next;
		--idx;
	}

	if (head == NULL) {
		new->next = NULL;
		*headRef = new;
	} 
	else {
		new->next = head->next;
		head->next = new;
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
void DeleteList(struct node** headRef) {
/* free() each node, set head to NULL */
  struct node* head = *headRef;
	struct node* nextNode;

	while (head != NULL) {
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
	*headRef = NULL; // have to dereference again since head is local
}
void PrintList(struct node* head) {
	/* print linked list */
	struct node* current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
}
