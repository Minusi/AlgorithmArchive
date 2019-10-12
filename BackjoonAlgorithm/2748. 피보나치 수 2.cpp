//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	if (N <= 0 || N > 90)
//		return -1;
//
//	long long dp[91];
//	dp[0] = 0;
//	dp[1] = 1;
//
//	for (int i = 2; i <= N; ++i)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//
//	cout << dp[N] << "\n";
//	return 0;
//}