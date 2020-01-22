//#include <stdio.h>
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//
//	char quizzes[81];
//	while (t--)
//	{
//		int score = 0;
//		int sequence = 0;
//		scanf("%s", quizzes);
//		for (int i = 0; quizzes[i] != '\0'; ++i)
//		{
//			if (quizzes[i] == 'O')
//				score += (++sequence);
//			else
//				sequence = 0;
//		}
//
//		printf("%d\n", score);
//	}
//	return 0;
//}