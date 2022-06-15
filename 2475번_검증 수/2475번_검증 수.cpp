#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int num1, num2, num3, num4, num5;
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	int result = ((num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4) + (num5 * num5)) % 10;

	printf("%d", result);

	return 0;
}
