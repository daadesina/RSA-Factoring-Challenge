#include "factor.h"


int main(int argc, char* argv[])
{
	FILE* myFile;
	char buffer[30];

	 long int num;
        long int first;
        long int second;
	
	myFile = fopen(argv[1], "r");

	while(fgets(buffer, 30, myFile) != NULL)
	{
		num = atoi(buffer);
		first = logic(num);
		second = num / first;
		printf("%ld = %ld * %ld\n", num, first, second);
	}

	fclose(myFile);

	(void)argc;


	return (0);
}
