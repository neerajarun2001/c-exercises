#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Write a Count() function that counts the number of times a given int 
 * occurs in a list. The code for this has the classic list traversal 
 * structure as demonstrated in Length(). */

struct node* BuildOneTwoThree();
int count(struct node* head, int searchFor);
void CountTest();

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	CountTest(); // run tests for counting 
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

int count(struct node* head, int searchFor) 
{
  int found, d;
	struct node* current;

	found=0;
	for (current = head; current != NULL; current = current->next) {
		if (current->data == searchFor)
			found++;
	}	
	return found;
}

void CountTest()
{
  struct node* list = BuildOneTwoThree();
	int c = count(list, 2); // should return 1
	assert(c==1);
	printf("%s\n", "Test passed successfully.");
}
