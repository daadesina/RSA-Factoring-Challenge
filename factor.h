#ifndef FACTOR_H
#define FACTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct my_node{
        long int data;
        struct my_node *link;
}node;

void myNode(long int data);
int logic(long int num);
node *reverse(node *head);

#endif
