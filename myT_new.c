#include "factor.h"

/*typedef struct my_node{
	long int data;
	struct my_node *link;
}node;*/

node *top;

void myNode(long int data)
{
	node *node0;
	node0 = malloc(sizeof(node0));
	node0->data = data;
	node0->link = NULL;

	node0->link = top;
	top = node0;

}

/*node *reverse(node *head)
{
	node *prev;
	node *next;

	while(head != NULL)
	{
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
	return (head);
}*/

int logic(long int num)
{
	long int mod;
	long int i;
	long int first;
	node *temp;



	for (i = 1000000; i >= 2; i--)
	{
		if(i == num)
			continue;

		mod = num % i;

		if (mod == 0)
		{
			myNode(i);
		}
	}

	/*logic*/
        /*temp = reverse(top);*/

	temp = top;
        first = temp->data;

	return (first);

}
