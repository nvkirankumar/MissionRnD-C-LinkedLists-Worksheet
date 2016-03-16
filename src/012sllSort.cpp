/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node *lptr;
void sll_012_sort(struct node *head){
	lptr t = NULL, p = NULL;
	int temp;

	for (t = head; t != NULL; t = t->next)
	{
		for (p = t; p != NULL; p = p->next)
		{
			if (t->data>p->data)
			{
				temp = t->data;
				t->data = p->data;
				p->data = temp;
			}
		}
	}
	
}