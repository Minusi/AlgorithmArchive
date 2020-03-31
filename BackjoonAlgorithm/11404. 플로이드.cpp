//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_limit = 100;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int dp[max_limit + 1][max_limit + 1];
//	constexpr int INF = 987654321;
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			dp[i][j] = INF;
//	for (int i = 1; i <= n; ++i)
//		dp[i][i] = 0;
//
//
//
//	{
//		int src, dest, cost;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> src >> dest >> cost;
//			if (dp[src][dest] > cost)
//				dp[src][dest] = cost;
//		}
//	}
//
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			for (int k = 1; k <= n; ++k)
//				if (dp[j][i] != INF && dp[i][k] != INF)
//					dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
//
//
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			if (dp[i][j] == INF)
//				cout << 0 << " ";
//			else
//				cout << dp[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	cout << "\n";
//	return 0;
//}