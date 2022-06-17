#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int hour, min;
	scanf("%d %d", &hour, &min);

	if (min - 45 < 0)
	{
		min = 60 - abs(min - 45);
		hour -= 1;

		if (hour == -1)
		{
			hour = 23;
		}
	}
	else
	{
		min -= 45;
	}

	printf("%d %d", hour, min);

	return 0;
}