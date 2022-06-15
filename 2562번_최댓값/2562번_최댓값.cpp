#pragma warning (disable : 4996)

#include <iostream>

int main()
{
	int max = 0, tmp, maxIdx;
	for (int i = 1; i < 10; ++i)
	{
		scanf("%d", &tmp);

		if (max < tmp)
		{
			max = tmp;
			maxIdx = i;
		}
	}

	printf("%d\n%d", max, maxIdx);

	return 0;
}