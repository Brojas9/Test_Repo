#include <stdio.h>

int main(void)
{
	int myArray[7] = {15,20,35,75,1,2,3};
	//Please, write your code here
	len = sizeof(myArray) / sizeof(myArray[0]));

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", myArray[i]);
	}
	
	return 0;
}