//#include <iostream>
//#include <cmath>
//#include <cstring>
//#include <vector>
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
//const int MaxPrime = 31623;	/* 31623^2 > 1000000000 */
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	bool Primes[MaxPrime+1];
//	memset(Primes, true, sizeof(Primes));
//	Primes[0] = Primes[1] = false;
//
//	vector<int> PrimeList;
//	PrimeList.push_back(2);
//
//	/* 소수 구하는 섹션 */
//	for (int i = 4; i <= MaxPrime; i += 2)
//		Primes[i] = false;
//	for (int i = 3; i <= MaxPrime; i += 2)
//	{
//		if (Primes[i] == true)
//		{
//			PrimeList.push_back(i);
//			for (int j = i + i; j <= MaxPrime; j += i)
//				Primes[j] = false;
//		}
//	}
//
//
//	int MaxFactor = 1;
//	for (const auto& it : PrimeList)
//	{
//		if (N % it == 0)
//		{
//			MaxFactor = N / it;
//			break;
//		}
//	}
//
//	cout << N - MaxFactor << "\n";
//	return 0;
//}