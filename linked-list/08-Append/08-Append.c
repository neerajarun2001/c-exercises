#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* append 'b' to the end of 'a' */

struct node* BuildOneTwoThree();
void Append();
void AppendTest();
void PrintList(struct node* head);

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	AppendTest();
}

struct node* BuildOneTwoThree() {
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

void AppendTest() {
	struct node* a;
	struct node* b;

	a = BuildOneTwoThree();
	b = BuildOneTwoThree();

	Append(&a, &b);
	PrintList(a);

}
void Append(struct node** aRef, struct node** bRef) {
	struct node* a = *aRef;
	struct node* b = *bRef;

	if (a == NULL) {
		*aRef = b;
	}
	else {
		while (a->next != NULL) 
			a = a->next;
		a->next = b;
	}
	*bRef = NULL;
}
void PrintList(struct node* head) {
	/* print linked list */
	struct node* current = head;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
}
