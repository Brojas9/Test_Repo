#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d - Fizz", i);
		}
		else
		{
			printf("%d - Buzz", i);
		}
	}

	return 0;
}