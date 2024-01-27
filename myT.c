#include "factor.h"

typedef struct my_node{
	long int data;
	struct my_node *next;
}node;

node *top;

void myNode(long int data)
{
	node *node0;
	node0 = malloc(sizeof(node0));
	node0->data = data;
	node0->next = NULL;

	node0->next = top;
	top = node0;

}



int logic(long int num)
{
	long int mod;
	long int i;
	long int first;
	node *temp;



	for (i = 2; i <= 10000; i++)
	{
		if (i == num)
			continue;

		mod = num % i;

		if (mod == 0)
		{
			myNode(i);
		}
	}

	/*logic*/
        temp = top;

        first = temp->data;

	return (first);

}
