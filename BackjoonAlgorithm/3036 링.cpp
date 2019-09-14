//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	/* 유효성 검사 */
//	if (N < 3 || N > 100)
//	{
//		return -1;
//	}
//
//	int Rings[100];
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Rings[i];
//		/* 유효성 검사 */
//		if (Rings[i] < 1 || Rings[i] > 1000)
//			return -1;
//	}
//	int ResultNumerators[100];
//	fill(ResultNumerators, ResultNumerators + N, Rings[0]);
//
//	for (unsigned int i = 2; i <= N; ++i)
//	{
//		for (unsigned int j = 1; j < N; ++j)
//		{
//			/* 공약수로 계속 나눔 */
//			while (ResultNumerators[j] % i == 0 && Rings[j] % i == 0)
//			{
//				ResultNumerators[j] = ResultNumerators[j] / i;
//				Rings[j] = Rings[j] / i;
//			}
//		}
//	}
//
//	for (unsigned int i = 1; i < N; ++i)
//	{
//		cout << ResultNumerators[i] << "/" << Rings[i] << endl;
//	}
//
//	return 0;
//}