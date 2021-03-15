#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Write a Count() function that counts the number of times a given int 
 * occurs in a list. The code for this has the classic list traversal 
 * structure as demonstrated in Length(). */

struct node* BuildOneTwoThree();
void DeleteList(struct node** headRef);
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
void DeleteListTest() {
	struct node* list = BuildOneTwoThree();
	DeleteList(&list);
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
	head = NULL;
}

