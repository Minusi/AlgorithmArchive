//#include <stdio.h>
//
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	
//	char string[21];
//	char rep_string[161];
//	while (T--)
//	{
//		int R;
//		scanf("%d %s", &R, string);
//		
//		int index = 0;
//		for (int i = 0; string[i] != '\0'; ++i)
//			for (int j = 0; j < R; ++j)
//				rep_string[index++] = string[i];
//		rep_string[index++] = '\0';
//
//		printf("%s\n", rep_string);
//	}
//	return 0;
//}