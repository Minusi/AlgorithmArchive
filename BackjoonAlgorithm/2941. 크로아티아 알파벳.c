//#include <stdio.h>
//
//int main()
//{
//	char kstring[101] = { 0 };
//	scanf("%s", kstring);
//
//	int num_kalphabet = 0;
//	for (int i = 100; i >= 0; --i)
//	{
//		if (kstring[i] == '\0')	continue;
//
//		if (kstring[i] == '=' && i >= 1)
//		{
//			if (kstring[i - 1] == 'z' && i >= 2)
//			{
//				if (kstring[i - 2] == 'd')
//				{
//					num_kalphabet++;
//					i -= 2;
//					continue;
//				}
//				else
//				{
//					num_kalphabet++;
//					i -= 1;
//					continue;
//				}
//			}
//			else if (kstring[i - 1] == 'c'
//				|| kstring[i - 1] == 's'
//				|| kstring[i - 1] == 'z')
//			{
//				num_kalphabet++;
//				--i;
//				continue;
//			}
//		}
//		else if (kstring[i] == '-' && i >= 1)
//		{
//			if (kstring[i - 1] == 'c'
//				|| kstring[i - 1] == 'd')
//			{
//				num_kalphabet++;
//				--i;
//				continue;
//			}
//		}
//		else if (kstring[i] == 'j' && i >= 1)
//		{
//			if (kstring[i - 1] == 'l'
//				|| kstring[i - 1] == 'n')
//			{
//				num_kalphabet++;
//				--i;
//				continue;
//			}
//		}
//
//		num_kalphabet++;
//	}
//
//	printf("%d\n", num_kalphabet);
//	return 0;
//}