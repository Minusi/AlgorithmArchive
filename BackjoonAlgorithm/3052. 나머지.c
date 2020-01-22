//#include <stdio.h>
//
//int main()
//{
//	long long bitmask = 0;
//	int input;
//	int num_diff_r = 0;
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &input);
//		if ((bitmask & (long long)1 << (input % 42)) == 0)
//		{
//			bitmask |= (long long)1 << (input % 42);
//			num_diff_r++;
//		}
//	}
//
//	printf("%d\n", num_diff_r);
//	return 0;
//}