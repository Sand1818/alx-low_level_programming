#ifndef LISTS_H
#define LISTs_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: lenth of string
 * @next: next node pointer
 * 
 * Decription: stucture of singly linked node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif
