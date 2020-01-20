//#include <iostream>
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
//	int N;
//	cin >> N;
//
//	bool IsPrimes[1001];
//	memset(IsPrimes, true, sizeof(bool) * 1001);
//	IsPrimes[0] = IsPrimes[1] = false;
//	for (int i = 2; i <= 1000; ++i)
//	{
//		if (IsPrimes[i] == false)
//			continue;
//		
//		for (int j = i + i; j <= 1000; j += i)
//			IsPrimes[j] = false;
//	}
//
//	int Input;
//	int NumPrimes = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Input;
//		if (IsPrimes[Input] == true)
//			NumPrimes++;
//	}
//
//	cout << NumPrimes << "\n";
//
//	return 0;
//}