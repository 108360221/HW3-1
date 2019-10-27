#include <stdio.h>
#include <stdlib.h>

long factional(long number);

int main(void) {

	int i;
	
	for (i = 0; i <= 10; i++)
		printf("%2d! = %d\n", i, factional(i));

	system("pause");
	return 0;
}

long factional(long number) {

	if (number <= 1)
		return 1;
	else
		return (number * factional(number - 1));
}

