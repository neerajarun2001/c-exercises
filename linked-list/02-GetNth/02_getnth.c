#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Write a GetNth() function that takes a linked list and an integer 
 * index and returns the data value stored in the node at that index 
 * position. 0-indexed convention. */
struct node* BuildOneTwoThree();
void DeleteList();
void DeleteListTest();

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	DeleteListTest(); // run tests for counting 
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
void DeleteList(struct node** headRef) {
	/* free() each node and set head pointer to NULL */
	struct node* head = *headRef;
  while (head != NULL) {
		struct node* next = head->next;
		free(head);
	}
}
	void DeleteListTest() {
	struct node* list = BuildOneTwoThree();

	DeleteList(&myList);
}
