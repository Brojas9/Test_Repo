#include <stdio.h>

int main(void)
{
	for (int counter = 0; counter < 100; counter++)
	{
		printf("Hello, world!\n");
		if (counter == 50)
		{
			printf("More prints");
		}
	}
	return 0;
}