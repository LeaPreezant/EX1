#include "Stack.h"
#include <windows.h> 

#include <iostream>
#include <sstream>
#include <cstdlib>


// add to end
void push(Stack* s, unsigned int element)
{
    s->_elments = addToEnd(s->_elments, element);
    s->_count++;
}

// del end
int pop(Stack* s) // Return -1 if stack is empty
{
    if (s->_count == 0) 
    {
        return -1;
    }

    linkedList* prev = s->_elments;
    linkedList* cur = s->_elments;
    while (cur->next != NULL) 
    {
        prev = cur;
        cur = cur->next;
    }
    int val = cur->data;
    prev->next = NULL;
    s->_count--;
    return val;
}

void initStack(Stack* s)
{
    s->_elments = NULL;
    s->_count = 0;
}

void cleanStack(Stack* s)
{
    linkedList* current = s->_elments;
    linkedList* temp;

    while (current != NULL) 
    {
        temp = current;       
        current = current->next; 
        delete temp;
    }

    s = NULL;
}

bool isEmpty(Stack* s)
{
    return s->_count == 0;
}

bool isFull(Stack* s)
{
    return s->_count == 0;
}
