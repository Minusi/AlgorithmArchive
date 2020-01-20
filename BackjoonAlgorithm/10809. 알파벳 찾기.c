//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//	char string[101];
//	scanf("%s", string);
//
//	int num_char[26];
//	memset(num_char, -1, sizeof(num_char));
//	for (int i = 0; string[i] != '\0'; ++i)
//	{
//		int index = string[i] - 'a';
//		if (num_char[index] == -1)
//			num_char[index] = i;
//	}
//
//	for (int i = 0; i < 26; ++i)
//		printf("%d ", num_char[i]);
//	printf("\n");
//
//	return 0;
//}