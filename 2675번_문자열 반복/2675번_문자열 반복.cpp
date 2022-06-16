#pragma warning (disable : 4996)
#include <iostream>

int len(const char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		++count;
		++p;
	}
	return count;
}

int main()
{
	int count;
	scanf("%d", &count);

	int idx;
	char chArr[21] = {};

	for (int i = 0; i < count; ++i)
	{
		scanf("%d %s", &idx, chArr);
		int strCount = len(chArr);

		for (int j = 0; j < strCount; ++j)
		{
			for (int k = 0; k < idx; ++k)
			{
				printf("%c", chArr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}

//#include <iostream>
//
//int len(const char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		++count;
//		++p;
//	}
//	return count;
//}
//
//int main()
//{
//	int count;
//	scanf("%d", &count);
//
//	int idx;
//	char chArr[21] = {};
//
//	for (int i = 0; i < count; ++i)
//	{
//		scanf("%d %s", &idx, chArr);
//		int strCount = len(chArr);
//
//		for (int j = 0; j < strCount; ++j)
//		{
//			for (int k = 0; k < idx; ++k)
//			{
//				printf("%c", chArr[j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}