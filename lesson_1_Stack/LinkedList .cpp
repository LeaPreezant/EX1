#include "LinkedList.h"
#include <windows.h> 

#include <iostream>'
#include <sstream>
#include <cstdlib>

void addToHead(linkedList* head, int value)
{
    linkedList* newlist = new linkedList();
    newlist->data = value;
    newlist->next = head;
    head = newlist;
}

linkedList* addToEnd(linkedList* head, int value)
{
    linkedList* newNode = new linkedList();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) return newNode;
    linkedList* cur = head; // init variables

    while (cur->next != NULL) // while cur next isn't null
        cur = cur->next; // go to the next one

    cur->next = newNode; // now that we reached the end with set the cur's next to the item.
    return head;
}

void delEnd(linkedList* head, int value)
{
    if (!head) 
    {
        std::cout << "List Is Empty ." << std::endl;
        return;
    }
    if (!head->next) // if next is empty
    {
        delete head;
        head = NULL;
        return;
    }
    linkedList* temp = head;
    while (temp->next->next) 
    {
        temp = temp->next;
    }
    delete temp->next;  //  Delete the last node
    temp->next = NULL;  // Pointer to deleted member = NULL
}

void initList(linkedList* head)
{
    head->data = NULL;
    head->next = NULL;
}

void cleanList(linkedList* head)
{
    linkedList* current = head;
    linkedList* temp;

    while (current != NULL) 
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    head = NULL;
}
