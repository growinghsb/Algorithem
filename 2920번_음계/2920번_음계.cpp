#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int nums[8];
	scanf("%d %d %d %d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7]);

	if (nums[0] != 1 && nums[0] != 8)
	{
		printf("mixed");
		return 0;
	}

	for (int i = 0; i < 7; ++i)
	{
		int result = abs(nums[i] - nums[i + 1]);
		if (result != 1)
		{
			printf("mixed");
			return 0;
		}
	}

	nums[0] == 1 ? printf("ascending") : printf("descending");

	return 0;
}