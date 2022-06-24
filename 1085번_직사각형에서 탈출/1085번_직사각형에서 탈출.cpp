#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int resultX = abs(x - w);
	int resultY = abs(y - h);

	int inputMin, calculMin;
	inputMin = x <= y ? x : y;
	calculMin = resultX <= resultY ? resultX : resultY;

	printf("%d", inputMin <= calculMin ? inputMin : calculMin);

	return 0;
}