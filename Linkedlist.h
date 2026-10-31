#ifndef LINKEDLISTH
#define LINKEDLISTH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct ListNode
{
    unsigned int value;
    struct ListNode *next;
} ListNode;

void createNode(ListNode **head, unsigned int value);
int deleteNode(ListNode* head);
void freeList(ListNode *head);

#endif