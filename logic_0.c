#include "factor.h"

node *top;

void myNode(long long int data)
{
	node *node0;
	node0 = malloc(sizeof(node0));
	node0->data = data;
	node0->link = NULL;

	node0->link = top;
	top = node0;

}

long long int logic(long long int num)
{
	long long int mod;
	long long int i;
	long long int first;
	node *temp;



	for (i = 100000000; i >= 2; i--)
	{
		if(i == num)
			continue;

		mod = num % i;

		if (mod == 0)
		{
			myNode(i);
		}
	}

	temp = top;
        first = temp->data;

	return (first);

}
