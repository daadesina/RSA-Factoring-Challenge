#include "factor.h"


int main(int argc, char* argv[])
{
	FILE* myFile;
	char buffer[300];

	 long int num;
        long int first;
        long int second;
	
	myFile = fopen(argv[1], "r");

	while(fgets(buffer, 300, myFile) != NULL)
	{
		num = atoi(buffer);
		first = logic(num);
		second = num / first;
		printf("%ld = %ld * %ld\n", num, second, first);
		/*printf("%ld\n", num);*/
	}

	fclose(myFile);

	(void)argc;


	return (0);
}
