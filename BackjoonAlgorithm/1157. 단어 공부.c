//#include <stdio.h>
//
//
//int main()
//{
//	char string[1000001];
//	scanf("%s", string);
//	
//	int num_alphabet[26] = { 0 };
//	int num_uppercase[26] = { 0 };
//
//	for (int i = 0; string[i] != '\0'; ++i)
//	{
//		if ('A' <= string[i] && string[i] <= 'Z')
//			num_alphabet[string[i] - 'A']++;
//		else if('a' <= string[i] && string[i] <= 'z')
//			num_alphabet[string[i] - 'a']++;
//	}
//
//	int num_max = 0;
//	char max_char = '?';
//	for (int i = 0; i < 26; ++i)
//	{
//		if (num_alphabet[i] > num_max)
//		{
//			num_max = num_alphabet[i];
//			max_char = 'A' + i;
//		}
//		else if (num_alphabet[i] == num_max)
//			max_char = '?';
//	}
//
//	printf("%c\n", max_char);
//	return 0;
//}