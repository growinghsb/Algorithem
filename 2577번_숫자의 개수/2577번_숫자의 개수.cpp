#pragma warning (disable : 4996)

#include <iostream>

int main()
{
	int num, sum = 1;

	for (int i = 0; i < 3; ++i)
	{
		scanf("%d", &num);
		sum *= num;
	}

	int arr[10] = { 0, };

	while (sum != 0)
	{
		arr[sum % 10]++;
		sum /= 10;

		if ()
		{
			break;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}