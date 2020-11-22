# I-hate-generic-linked-lists

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

The basic operations of list functions are;
* **insertion:** adds a node at the start of the list
* **deletion:** deleted a node at the start of the list
* **display:** displays the list. This operation will vary depending on the data type contained in the list
* **search:** searches the list using a _"key"_
* **delete:** deletes the node at a desired position
* **free all:** frees the list from memory

Linked Lists come in many different varieties:
* Simple Linked Lists: only allow traversal from head to tail
* Double Linked Lists: allow traversal forwards and backwards
* Circular Linked Lists: head contains link to first and tail node and tail contains link to head

These functions are provided for educational purposes, and will be updated periodically to imitate more standardised notation among other languages.

Code is tested in Ubuntu using gcc. I will be adding more advanced linked list prototypes as time goes on. Work in progress...
