#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int count;
	scanf("%d", &count);

	int h, w, n;
	for (int i = 0; i < count; ++i)
	{
		scanf("%d %d %d", &h, &w, &n);

		int floor = n % h;

		if (floor == 0)
		{
			int noh = n / h;
			printf("%d\n", h * 100 + noh);
		}
		else
		{
			int noh = (n / h) + 1;
			printf("%d\n", floor * 100 + noh);
		}

	}
	return 0;
}
