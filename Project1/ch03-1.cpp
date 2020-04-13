#include <stdio.h>

int main()
{
	int i, sale[4] = { 157, 200, 251, 312 };

	for (i = 0; i < 4; i++)
	{
		printf("\naddress : %u sale[%d] = %d", &sale[i], i, sale[i]);
		}
}