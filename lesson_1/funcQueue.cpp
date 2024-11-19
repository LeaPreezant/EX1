#include <stdlib.h>
#include <stdio.h>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->data = (int*)malloc(size * sizeof(int));
    q->first = 0; // empty
    q->last = 0;
    q->maxSize = size;
    q->size = 0;
}

void cleanQueue(Queue* q)
{
    if (q->data != NULL) 
    {
        free(q->data);  // free after malloc
        q->data = NULL; 
    }
}