#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Write a Count() function that counts the number of times a given int 
 * occurs in a list. The code for this has the classic list traversal 
 * structure as demonstrated in Length(). */

struct node* BuildOneTwoThree();
int GetNth(struct node* head, int i);
void GetNthTest();

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	GetNthTest(); // run tests for counting 
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

int Length(struct node* head)
{
	int count;
	struct node* current = head;

	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

int GetNth(struct node* head, int i)
{
	int nth, len;
	struct node* current;
	
	len = Length(head);
	assert(i >= 0 && i < len);

	current = head;
	while (i > 0) {
		current = current->next;
		i--;
	}
	return current->data;
}

void GetNthTest()
{
  struct node* list = BuildOneTwoThree();
	int c = GetNth(list, 2); // should return 3
	assert(c==3);
	printf("%s\n", "Test passed successfully.");
}
