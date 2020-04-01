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
//constexpr int max_limit = 500;
//constexpr int INF = 987654321;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int dp[max_limit + 1][max_limit + 1];
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			dp[i][j] = INF;
//	for (int i = 1; i <= n; ++i)
//		dp[i][i] = 0;
//
//	{
//		int src, dest;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> src >> dest;
//			dp[src][dest] = 1;
//		}
//	}
//
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			for (int k = 1; k <= n; ++k)
//				dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
//
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			if (dp [i][j] == INF)
//				dp[i][j] = -dp[j][i];
//
//	//for (int i = 1; i <= n; ++i)
//	//{
//	//	for (int j = 1; j <= n; ++j)
//	//	{
//	//		cout.width(3);
//	//		if (dp[i][j] == INF || dp[i][j] == -INF)
//	//			cout << 0;
//	//		else
//	//			cout << dp[i][j];
//	//	}
//	//	cout << "\n";
//	//}
//
//	int num_known = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		bool can_known = true;
//		for (int j = 1; j <= n; ++j)
//		{
//			if (i == j)
//				continue;
//
//			if (dp[i][j] == INF || dp[i][j] == -INF)
//			{
//				can_known = false;
//				break;
//			}
//
//		}
//
//		if (can_known)
//			num_known++;
//	}
//
//	cout << num_known << "\n";
//	return 0;
//}