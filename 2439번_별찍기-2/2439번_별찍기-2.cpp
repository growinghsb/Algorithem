#pragma warning(disable : 4996)
#include <iostream>

int main()
{
	int count;
	scanf("%d", &count);

	int star = 1;
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			if (count - star <= j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		++star;
	}
}