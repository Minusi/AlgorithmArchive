//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	char string[101];
//
//	int num_group_str = 0;
//	while (n--)
//	{
//		scanf("%s", string);
//		char prev = '\0';
//
//		int alphabet[26] = { 0 };
//		int is_group_str = 1;
//		for (int i = 0; string[i] != '\0'; ++i)
//		{
//			if (string[i] != prev 
//				&& alphabet[string[i] - 'a'] != 0)
//			{
//				is_group_str = 0;
//				break;
//			}
//
//			prev = string[i];
//			alphabet[prev - 'a']++;
//		}
//
//		if (is_group_str)
//			num_group_str++;
//	}
//
//	printf("%d\n", num_group_str);
//	return 0;
//}