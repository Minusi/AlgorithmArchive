//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	string S1 = "0", S2 = "0";
//	string Input;
//	cin >> Input; S1 += Input;
//	cin >> Input; S2 += Input;
//
//	int DP[1001][1001] = { 0 };
//	for (int i = 1; i < S1.size(); ++i)
//	{
//		for (int j = 1; j < S2.size(); ++j)
//		{
//			if (S1[i] == S2[j])
//				DP[i][j] = max(DP[i][j - 1], DP[i - 1][j - 1] + 1);
//			else
//				DP[i][j] = max(DP[i][j - 1], DP[i - 1][j]);
//		}
//	}
//
//#ifdef DEBUG
//	for (int i = 0; i < S1.size(); ++i)
//	{
//		for (int j = 0; j < S2.size(); ++j)
//		{
//			cout << "\t" << DP[i][j] << " ";
//		}
//		cout << "\n";
//	}
//#endif // DEBUG
//
//
//	cout << DP[S1.size() - 1][S2.size() - 1] << "\n";
//	return 0;
//}