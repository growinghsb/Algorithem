#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int sum = 0;
	int num1, num2, num3;

	for (;;)
	{
		scanf("%d %d %d", &num1, &num2, &num3);
		if (num1 == 0 && num2 == 0 && num3 == 0)
		{
			break;
		}

		num1 *= num1;
		num2 *= num2;
		num3 *= num3;

		if (num1 + num2 == num3 ||
			num2 + num3 == num1 ||
			num3 + num1 == num2)
		{
			printf("%s\n", "right");
		}
		else
		{
			printf("%s\n", "wrong");
		}
	}
	return 0;
}