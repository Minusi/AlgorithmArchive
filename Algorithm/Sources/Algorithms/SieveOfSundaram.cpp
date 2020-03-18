//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//
//int main()
//{
//	/* 2N + 2 이하의 소수를 구하기 위한 수 */
//	unsigned int N;
//	cin >> N;
//
//	
//	
//	/* 소수인지 아닌지 저장하는 배열 */
//	bool* IsPrimes = new bool[N+1];
//	memset(IsPrimes, true, sizeof(bool) * (N+1));
//
//	/* 순다람의 체 */
//	for (unsigned int i = 1; 2 * i + 2 * i * i <= N; ++i)
//	{
//		int Unary;
//		for (unsigned int j = i; (Unary = i + j + (2 * i*j)) <= N; ++j)
//		{
//			IsPrimes[Unary] = false;
//		}
//	}
//
//
//
//	/* 순다람의 체 출력 */
//	for (int i = 0; i <= N; ++i)
//	{
//		if (i == 0)
//		{
//			cout << 2 << " ";
//			continue;
//		}
//
//		if (IsPrimes[i] == true)
//		{
//			cout << 2 * i + 1 << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}