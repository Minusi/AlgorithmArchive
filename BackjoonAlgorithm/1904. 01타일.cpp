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
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	if (N <= 0 || N > 1000000)
//		return -1;
//
//	int dp[1000001];
//	dp[0] = 1;
//	dp[1] = 1;
//
//	for (int i = 2; i <= N; ++i)
//	{
//		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
//	}
//	
//	cout << dp[N] << '\n';
//	return 0;
//}