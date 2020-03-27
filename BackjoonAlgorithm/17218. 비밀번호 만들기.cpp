//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	string s1, s2;
//	cin >> s1 >> s2;
//	
//	constexpr int max_limit = 40;
//	int dp[max_limit + 1][max_limit + 1] = { 0 };
//	
//	string result;
//	for (int i = 1; i <= s1.size(); ++i)
//	{
//		for (int j = 1; j <= s2.size(); ++j)
//		{
//			if (s1[i - 1] == s2[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//
//	{
//		int i = s1.size();
//		int j = s2.size();
//
//		while (dp[i][j] != 0)
//		{
//			if (dp[i - 1][j] == dp[i][j])
//				--i;
//			else if (dp[i][j - 1] == dp[i][j])
//				--j;
//			else
//			{
//				result += s1[i - 1];
//				--i, --j;
//			}
//		}
//	}
//	
//	reverse(result.begin(), result.end());
//	cout << result << "\n";
//
//	
//	return 0;
//}