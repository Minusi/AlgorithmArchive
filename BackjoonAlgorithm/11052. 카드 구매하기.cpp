//#include <iostream>
//#include <algorithm>
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
//	int Prices[1001];
//	for (int i = 1; i <= N; ++i)
//		cin >> Prices[i];
//
//	int Dp[1001] = { 0 };
//	Dp[1] = Prices[1];
//	for (int i = 2; i <= N; ++i)
//	{
//		for (int j = i; j > 0; --j)
//		{
//			Dp[i] = max(Dp[i-j] + Prices[j], Dp[i]);
//		}
//	}
//
//	cout << Dp[N] << "\n";
//	return 0;
//}