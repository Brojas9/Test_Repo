#include <stdio.h>

int main(void)
{
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 0)
		{
			printf("even");

		}
		else
		{
			printf("odd");
		}
	}

	return 0;
}