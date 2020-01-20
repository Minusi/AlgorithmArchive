//#include <iostream>
//#include <utility>
//#include <vector>
//#include <cstring>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	bool IsPrime[10001];
//	memset(IsPrime, true, sizeof(IsPrime));
//	IsPrime[0] = IsPrime[1] = false;
//
//	vector<int> Primes;
//	for (int i = 2; i <= 10000; ++i)
//	{
//		if (IsPrime[i] == false)
//			continue;
//
//		Primes.push_back(i);
//		for (int j = i * 2; j <= 10000; j += i)
//			IsPrime[j] = false;
//	}
//
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		int Min, Max;
//		for (int i = 0; i < Primes.size(); ++i)
//		{
//			if (Primes[i] > N / 2)
//				break;
//			for (int j = i; j < Primes.size(); ++j)
//			{
//				if (Primes[j] > N)
//					break;
//
//				if (Primes[i] + Primes[j] == N)
//				{
//					Min = Primes[i];
//					Max = Primes[j];
//				}
//			}
//		}
//
//		cout << Min << " " << Max << "\n";
//	}
//
//
//	return 0;
//}