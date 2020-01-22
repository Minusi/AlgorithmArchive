//#include <stdio.h>
//
//int main()
//{
//	int c;
//	scanf("%d", &c);
//
//	int scores[1000];
//	while (c--)
//	{
//		int n;
//		scanf("%d", &n);
//
//		int sum = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			scanf("%d", &scores[i]);
//			sum += scores[i];
//		}
//		
//		double avg = sum / (double)n;
//		int num_avg_upper = 0;
//
//		for (int i = 0; i < n; ++i)
//			num_avg_upper += scores[i] > avg ? 1 : 0;
//
//		printf("%.3lf%%\n", (num_avg_upper / (double)n) * 100);
//	}
//	return 0;
//}