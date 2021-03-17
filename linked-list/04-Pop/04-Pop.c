#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Write a Pop() function that is the inverse of Push(). Pop() takes a 
 * non-empty list, deletes the head node, and returns the head node's 
 * data. If all you ever used were Push() and Pop(), then our linked 
 * list would really look like a stack. */
struct node* BuildOneTwoThree();
int Pop(struct node** headRef);
int Length(struct node* head);
void PopTest();

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	PopTest(); // run tests for counting 
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
void PopTest() {
	struct node* head = BuildOneTwoThree();
	int a = Pop(&head);
	int b = Pop(&head);
	int c = Pop(&head);
	int len = Length(head);
	assert(a==1);
	assert(b==2);
	assert(c==3);
	assert(len==0);
	printf("%s\n", "Tests passed.");
}
int Pop(struct node** headRef) {
	/* delete node, return value */
  struct node* head;
	int val;

	head = *headRef;
	assert(head != NULL);

  val = head->data;
	*headRef = head->next; // note use of reference pointer

	free(head); // delete node
	return val;
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

