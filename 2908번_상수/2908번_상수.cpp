#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int num1, num2, tmp;
	scanf("%d %d", &num1, &num2);

	int num1Result = 0;
	int num2Result = 0;

	num1Result = num1 * 0.01;
	num1 -= num1Result * 100;

	tmp = num1 * 0.1;
	num1 -= tmp * 10;
	num1Result += tmp * 10;

	num1Result += num1 * 100;

	num2Result = num2 * 0.01;
	num2 -= num2Result * 100;

	tmp = num2 * 0.1;
	num2 -= tmp * 10;
	num2Result += tmp * 10;

	num2Result += num2 * 100;

	printf("%d", num1Result > num2Result ? num1Result : num2Result);

	return 0;
}