#include "Queue.h"
#include <iostream>
#include <sstream>
#include <windows.h>

void initQueue(Queue* q, unsigned int size)
{
    q->_elements = new int[size];
    q->_maxSize = size;
    q->_count = 0;
}

void cleanQueue(Queue* q)
{
    if (q->_elements != NULL)
    {
        delete[] q->_elements;  // free 
        q->_elements = NULL;
    }
    // reset 
    q->_maxSize = 0;
    q->_count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (q->_count < q->_maxSize)
    {
        q->_elements[q->_count] = newValue;
        q->_count++;
    }
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
    if (q->_count == 0)
    {
        return -1;
    }
    int firstElement = q->_elements[0];
    int i = 0;
    for (i = 0; i < q->_count - 1; i++) 
    {
        q->_elements[i] = q->_elements[i + 1];
    }
    q->_elements[i] = 0;
    q->_count--;
    return firstElement;
}


bool isEmpty(Queue* s)
{
    if (s->_count == 0)
        return true;
    return false;
}
bool isFull(Queue* s)
{
    if (s->_count == 0)
        return false;
    return true;
}