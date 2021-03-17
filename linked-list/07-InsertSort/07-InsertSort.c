#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
/* Given list, rearranges nodes to be in sorted order */

struct node* BuildOneTwoThree();
void SortedInsert(struct node** headRef, struct node* newNode);
void InsertSort(struct node** headRef);
void InsertSortTest();
int Length(struct node* head);
void PrintList(struct node* head);

struct node {
	int            data;
	struct node*   next;
};

int main() 
{
	InsertSortTest();
}

struct node* BuildThreeTwoOne() 
{
	struct node *head, *second, *third;
	head = NULL;
	second = NULL;
	third = NULL;

	head =  malloc(sizeof(struct node));
	second =  malloc(sizeof(struct node));
	third =  malloc(sizeof(struct node));

	head->data = 3;
	head->next = second;

	second->data = 2;
	second->next = third;

  third->data = 1;
	third->next = NULL;

	return head;
}

void InsertSortTest() {
	struct node* test;

	test = BuildThreeTwoOne();

	InsertSort(&test);
	PrintList(test);

}
void InsertSort(struct node** headRef) {
  /* create empty list, insert into it, change headRef */
	struct node* newList;
	struct node* current;
	struct node* placeholder;
	
	newList = malloc(sizeof(struct node));
	current = *headRef;

	newList = NULL;

	while (current != NULL) {
		placeholder = current->next;
		SortedInsert(&newList, current);
		current = placeholder;
	}	
	*headRef = newList;
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
