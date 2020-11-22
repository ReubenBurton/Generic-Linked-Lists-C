#ifndef HEADER_H
#define HEADER_H

typedef struct data
{
    int hp;
    int atk;
    int def;
    int med;
    char* Name;
}data;
 
typedef struct Node
{
    void* data;
    struct Node* next;
}Node;
 
typedef struct linkedList
{
    Node* head;
}linkedList;
 
 /*----------------------inclusions from linkedList.c------------*/
 
linkedList* create_empty_list(void);
Node* insert_end(linkedList* list, void* data);
Node* insert_start(linkedList* list, void* data);
Node* remove_start(linkedList* list);
Node* remove_end(linkedList* list);
Node* remove_specific(linkedList* list, int index);
int length_of_list(linkedList* list);
void free_list(linkedList* list);
 
void printList(linkedList* list, void (*fptr)(void *));
void printInt(void *i);
void printFloat(void *f);
void printString(void* s);
void printEnemyStart(void* s);
 
 
#endif

