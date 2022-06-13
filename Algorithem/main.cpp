#include <iostream>

int main() 
{
	int a, b;
	scanf_s("%d", &a);
	fflush(stdin);

	scanf_s("%d", &b);

	printf("%d", a - b);
	return 0;
}