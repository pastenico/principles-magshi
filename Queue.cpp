#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->arr = new int[size];
    q->length = size;
    q->count = 0;
}

void cleanQueue(Queue* q)
{
    delete[] q->arr;
    q->arr = nullptr;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if(!isFull(q))
    {
        q->arr[q->count] = newValue;
        q->count++;
    }
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
    int i = 0, first = 0;
    if(isEmpty(q))
    {
        return -1;
    }
    first = q->arr[0];
    for(i=0; i < q->count-1; i++)
    {
        q->arr[i] = q->arr[i+1];
    }
    q->count -= 1;
    return first;
}

bool isEmpty(Queue* s)
{
    return !(s->count);
}

bool isFull(Queue* s)
{
    return s->count == s->length;
}

