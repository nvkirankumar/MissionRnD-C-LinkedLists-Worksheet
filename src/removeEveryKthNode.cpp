/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node *lptr;

struct node * removeEveryKthNode(struct node *head, int K)
{
	lptr t = head, temp = NULL;

	if (head == NULL || K <= 1)
		return NULL;

	int i = 0;
	while (t != NULL)
	{
	
		i++;
		if (i == K - 1)
		{
			if (t->next == NULL)
				t->next = NULL;
			else
				t->next = (t->next)->next;
			i = 0;
		}
		t = t->next;
	}
	return head;
}

