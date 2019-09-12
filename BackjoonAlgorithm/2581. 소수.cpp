//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <cstring>
//using namespace std;
//
//
//
//void Print(bool (&Array)[10001])
//{
//	int count = 0;
//
//	for (int i = 1; i <= 10000; ++i)
//	{
//		if (Array[i] == true)
//		{
//			cout << setw(5) << i << " ";
//			count++;
//
//			if (count % 5 == 0)
//			{
//				cout << endl;
//			}
//		}
//	}
//}
//
//
//
//
//
//int main()
//{
//	unsigned int M, N;
//	cin >> M >> N;
//
//	/* 유효성 검사 */
//	if (M > 10000 ||
//		N > 10000 ||
//		M > N)
//	{
//		return -1;
//	}
//
//
//
//	bool IsPrimes[10001];
//	memset(IsPrimes, true, sizeof(bool) * 10001);
//	IsPrimes[0] = false;
//	IsPrimes[1] = false;
//
//	for (int i = 2; i <= sqrt(10000); ++i)
//	{
//		if (IsPrimes[i] == true)
//		{
//			for (int j = i + i; j <= 10000; j = j + i)
//			{
//				IsPrimes[j] = false;
//			}
//		}
//	}
//
//	// Print(IsPrimes);
//	int SumPrimes = 0;
//	int MinPrime = -1;
//	for (unsigned int i = M; i <= N; ++i)
//	{
//		if (IsPrimes[i] == true)
//		{
//			SumPrimes += i;
//
//			if (MinPrime == -1)
//			{
//				MinPrime = i;
//			}
//		}
//	}
//	
//	if (SumPrimes > 0)
//	{
//		cout << SumPrimes << endl;
//	}
//	cout << MinPrime << endl;
//	return 0;
//}