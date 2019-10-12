//#include <iostream>
//#include <algorithm>
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
//	if (N == 0 || N > 500)
//		return -1;
//
//
//
//	int dp[501][501];
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			cin >> dp[i][j];
//		}
//	}
//
//	for (int i = 2; i <= N; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			if (j == 1)
//			{
//				dp[i][j] += dp[i - 1][j];
//			}
//			else if (j == i)
//			{
//				dp[i][j] += dp[i - 1][j - 1];
//			}
//			else
//			{
//				dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
//			}
//		}
//	}
//
//	// 출력
//#ifdef DEBUG
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			cout << dp[i][j] << " ";
//		}
//		cout << "\n";
//	}
//#endif // DEBUG
//
//	int MaxValue = -1;
//	for (int i = 1; i <= N; ++i)
//	{
//		MaxValue = max(dp[N][i], MaxValue);
//	}
//
//	cout << MaxValue << "\n";
//	return 0;
//}