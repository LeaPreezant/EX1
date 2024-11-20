#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct linkedList 
{
    unsigned int data;
    struct linkedList* next;
};

void addToHead(linkedList* head, int value);

linkedList* addToEnd(linkedList* head, int value);
void delEnd(linkedList* head, int value);

void initList(linkedList* head);
void cleanList(linkedList* head);

#endif  
