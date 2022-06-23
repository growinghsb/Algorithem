#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int count;
	scanf("%d", &count);

	int num, min = 1000000, max = -1000000;
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &num);

		if (num > max)
		{
			max = num;
		}

		if (num < min)
		{
			min = num;
		}
	}

	printf("%d %d", min, max);
	return 0;
}
