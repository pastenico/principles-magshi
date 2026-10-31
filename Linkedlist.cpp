#include "Linkedlist.h"

void createNode(ListNode **head, unsigned int value)
/*
Creates a new frame and places it in the frame list, checking for invalid name and path
input: a pointer to the head node pointer
output: none
*/
{
    ListNode* newNode = NULL;
    ListNode* curr = *head;

    newNode = new ListNode; // mallocing memory for the node
    if(!newNode)
    {
        printf("Malloc failed!");
        return;
    }
    newNode->next = NULL;
    newNode->value = value;

    if(*head != NULL) // if there is a head
    {
        while(curr->next)
        {
            curr = curr->next;
        }
        curr->next = newNode;  // placing this node at the end of the list
    }
    else
    {
        *head = newNode; // making this node the head node
    }
}

int deleteNode(ListNode *head)
/*
deletes a frame from the given list, based on inputing the name of the frame
input: the head node of the frame list
output: the new or old head node (based on if the deleted frame was the head node)
*/
{
    unsigned int value = 0;
    ListNode *curr = head;
    ListNode *next = NULL;
    ListNode *prev = NULL;

    while(curr) // looping until name was found
    {
        
        prev = curr;
        curr = curr -> next;
    }
    value = curr->value;
    prev->next = nullptr;
    delete curr;
    return value;
}


void freeList(ListNode *head)
/*
frees all of the dynamic memory from a given frame list
input: the head node of the frame list
output: none
*/
{
    ListNode *curr = head;
    ListNode *next = NULL;
    while(curr) // looping through all of the frames
    {
        next = curr->next; // getting the next frame
        delete curr;
        curr = next;
    }
}