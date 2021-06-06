#Generic-Linked-Lists-in-C

## Generic Linked List overview:

This repository contains some functions for dealing with generic linked lists in C89. Why do we use _generic_ linked lists? 
Generic Linked Lists allow the use of **any** datatype in linked lists. 
This includes:
* integers
* floats
* chars
* strings
* arrays
* structs
* etc

This is accomplished through the use of **void pointers**. One requirement of void pointers is the data to be accessed must be _typecast_.
A full explanation of void pointers and typecasting goes beyond the scope of this readme, but the gist of it is:
* **int:** \*(int*)_data_
* **float:** \*(float*)_data_
* **char:** \*(char*)_data_
* **strings:** (char*)_data_
* **structs:**  ((struct typedef*)_data)->field_

_Arrays_  
Arrays are best dealt with using a struct containing the array, as well as the dimensions of the array.
This is necessary because array operations require array _dimensions_. This applies to multi dimensional arrays.
For example, for an array containing 2 dimensions I would build a struct like so:

typedef struct ArrayPrototype  
{  
&nbsp;&nbsp;&nbsp;&nbsp; _initialiser_** array;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; int x;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; int y;  
}

with _initialiser_ being type char, int, double, etc...  

The data could then be accessed like this:  
* **arrays:** ((struct typedef*)_data)->array_  
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;     ((struct typedef*)_data)->x_  
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    ((struct typedef*)_data)->y_  

The basic operations of list functions are;
* **insertion:** adds a node at the start, end or index position of the list
* **deletion:** deletes a node at the start, end or predefined position of the list
* **display:** displays the list. This operation will vary depending on the data type contained in the list or the desired nodes
* **search:** searches the list using a _"key"_
* **sort:** sorts the list according to a defined criterion
* **free all:** frees the list from memory. Necessary in C89 due to lack of garbage collection

More advanced operations to come...

Linked Lists come in many different varieties:
* Simple Linked Lists: only allow traversal from head to tail
* Double Linked Lists: allow traversal forwards and backwards
* Circular Linked Lists: head contains link to first and tail node and tail contains link to head

These functions are provided for educational purposes, and will be updated periodically to imitate more standardised notation among other languages.
There will also be an included main program and an associated Makefile for test purposes.

Code is tested in Ubuntu using gcc. I will be adding more advanced linked list prototypes as time goes on. Work in progress...
