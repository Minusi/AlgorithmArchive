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
//	int T;
//	cin >> T;
//
//	long long dp[101];
//	dp[0] = 0;
//	dp[1] = dp[2] = dp[3] = 1;
//	dp[4] = dp[5] = 2;
//	for (int i = 6; i <= 100; ++i)
//	{
//		dp[i] = dp[i - 1] + dp[i - 5];
//	}
//#ifdef DEBUG
//	int count = 0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		cout << dp[i] << " ";
//		count++;
//		if (count % 10 == 0)
//			cout << "\n";
//	}
//#endif // DEBUG
//
//
//	for (int tc = 1; tc <= T; ++tc)
//	{
//		int N;
//		cin >> N;
//		if (N == 0 || N > 100)
//			return -1;
//
//		
//		cout << dp[N] << '\n';
//	}
//	return 0;
//}