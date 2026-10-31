#include <iostream>
#include "Linkedlist.h"
#include "Stack.h"

bool isEmpty(Stack* s)
{
	return !(s->count);
}

void push(Stack* s, unsigned int element)
{
	if (!isFull(s))
	{
		createNode(&s->head, element);
		s->count++;
	}
}

int pop(Stack* s) // Return -1 if stack is empty
{
	if (!isEmpty(s))
	{
		s->count -= 1;
		return deleteNode(s->head);
	}
	return -1;
}