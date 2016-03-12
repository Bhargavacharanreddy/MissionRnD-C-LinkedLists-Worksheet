/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node
{
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N)
{
	int n, m, s = 0;
	struct node *p, *q=NULL, *tmp, *head;
	p = (struct node *)malloc(sizeof(struct node));
	head = p;
	if (N == 0)
	{
		head->num = N;
		head->next = NULL;
		return head;
	}
	if (N < 0)
		N = -(N);
	
	while (N != 0)
	{
		m = N % 10;
		s = s * 10 + m;
		N = N / 10;
	}
	N = s;

	while (N != 0)
	{

		n = N % 10;
		N = N / 10;
        p->num = n;
		tmp = (struct node *)malloc(sizeof(struct node));
		p->next = tmp;
		q = p;
		p = tmp;
	}
	q->next = NULL;
	return head;
}