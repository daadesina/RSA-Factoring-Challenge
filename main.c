#include "factor.h"


int main(int argc, char* argv[])
{
	FILE* myFile;
	char buffer[300];

	long long int num;
        long long int first;
        long long int second;
	
	myFile = fopen(argv[1], "r");

	while(fgets(buffer, 300, myFile) != NULL)
	{
		num = strtoll(buffer, NULL, 0);
		first = logic(num);
		second = num / first;
		printf("%lld=%lld*%lld\n", num, second, first);
	}

	fclose(myFile);

	(void)argc;


	return (0);
}
