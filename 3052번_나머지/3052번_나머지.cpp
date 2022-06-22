#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int remainder[10] = {};
	int idx = 0;

	int num, result;
	bool flag;
	for (int i = 0; i < 10; ++i)
	{
		flag = true;

		scanf("%d", &num);
		result = num % 42;

		if (idx == 0)
		{
			remainder[idx++] = result;
			continue;
		}

		for (int j = 0; j < idx; ++j)
		{
			if (result == remainder[j])
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			remainder[idx++] = result;
		}
	}
	printf("%d", idx);

	return 0;
}