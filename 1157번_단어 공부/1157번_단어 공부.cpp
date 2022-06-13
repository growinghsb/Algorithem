#pragma warning(disable : 4996)
#include <stdio.h>

char ch[1000001];

int main()
{
	int arr[26] = { 0, };

	scanf("%s", ch);

	char* pCh = ch;
	while (*pCh != '\0')
	{
		int idx = ((*pCh) | 0x20) - 97;
		arr[idx] += 1;
		++pCh;
	}

	int max = arr[0];
	char chTmp = 65;

	for (int i = 1; i < 26; ++i)
	{
		if (arr[i] == max)
		{
			chTmp = '?';
		}

		if (arr[i] > max)
		{
			max = arr[i];
			chTmp = i + 65;
		}
	}
	printf("%c", chTmp);

	return 0;
}