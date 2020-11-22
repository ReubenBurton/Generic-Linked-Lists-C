#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "header.h"

/*----------------------generic linked list functions---------------------*/

linkedList* create_empty_list(void)
{
    linkedList* new_head;
    new_head = (linkedList*)malloc(sizeof(linkedList));
    new_head->head = NULL;

    return new_head;
}

Node* insert_end(linkedList* list, void* data)
{
    Node* new_node;
    Node* temp;
    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    if(list->head == NULL)
    {
        list->head = new_node;
    }
    else
    {
        temp = list->head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new_node;
    }
    return(list->head);
}

Node* insert_start(linkedList* list, void* data)
{
    Node* new_node;
    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    if(list->head == NULL)
    {
        list->head = new_node;
    }
    else
    {
        new_node->next = list->head;
        list->head = new_node;
    }
    return(list->head);
}

Node* remove_start(linkedList* list)
{
    Node* new_node;
    if(list->head == NULL)
    {
        return NULL;
    }
    else
    {
        new_node = list->head;
        list->head = list->head->next;
        free(new_node);
    }
    return(list->head);
}

Node* remove_end(linkedList* list)
{
    Node* new_node;
    if(list->head == NULL)
    {
        return NULL;
    }
    else
    {
        new_node = list->head;
        while(new_node->next->next != NULL)
        {
            new_node = new_node->next;
        }
        free(new_node->next);
        new_node->next = NULL;

    }
    return(list->head);
}

Node* remove_specific(linkedList* list, int index)
{
    Node* new_node, *proceed;
    int i = 0;
    if(list->head == NULL)
    {
        return NULL;
    }
    else
    {
        new_node = list->head;
        for(i = 0; i < index-1 && new_node != NULL; i++)
        {
            new_node = new_node->next;
        }
        proceed = new_node->next->next;
        free(new_node->next);
        new_node->next = proceed;

    }
    return(list->head);
}

int length_of_list(linkedList* list)
{
    Node* temp;
    int length = 0;
    temp = list->head;
    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void free_list(linkedList* list)
{
    while(list->head->next != NULL)
    {
        Node* node = list->head->next;
        list->head->next = node->next;
        free(node);
        node = NULL;
    }
}

/*----------------------function to print using function pointers---------*/

void printList(linkedList* list, void (*fptr)(void *))
{
    Node* temp;
    temp = list->head;
    while (temp != NULL)
    {
        (*fptr)(temp->data);
        temp = temp->next;
    }
}

/*----------------------print function pointers---------------------------*/
void printInt(void *i)
{
    printf("%d", *(int *)i);
}

void printFloat(void *f)
{
    printf("%f", *(float *)f);
}

void printString(void* s)
{
    printf("%s\n", (char*)s);
}

void printEnemyStart(void* s)
{
    printf("%d", ((data*)s)->hp);
    printf("\t");
    printf("%d", ((data*)s)->atk);
    printf("\t");
    printf("%d", ((data*)s)->def);
    printf("\t");
    printf("%s", ((data*)s)->Name);
    printf("\n");

}

/*----------------------prototype to print struct fields, sub as needed---*/




/*
void printStruct(void* s)
{
    printf("%d", ((data*)s)->bed);
    printf("%d", ((data*)s)->bath);
}
*/
