#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int num;
	scanf("%d", &num);

	int remainder = num % 10 - 9;
	int digitSum = remainder + 9 - remainder;


	return 0;
}