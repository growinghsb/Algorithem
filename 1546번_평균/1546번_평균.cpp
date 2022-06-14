#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int count;
	scanf("%d", &count);

	int subject[1000];
	int max = 0;
	int curIdx = 0;
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &subject[i]);
		fflush(stdin);

		if (max < subject[i])
		{
			max = subject[i];
		}
		++curIdx;
	}

	float sum = 0;
	for (int i = 0; i < curIdx; ++i)
	{
		sum += ((float(subject[i]) / max) * 100.f);
	}

	printf("%f", sum / curIdx);

	return 0;
}