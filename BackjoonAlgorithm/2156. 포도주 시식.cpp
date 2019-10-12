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
//	int Table[10001];
//	for (int i = 1; i <= N; ++i)
//		cin >> Table[i];
//#ifdef DEBUG
//	{
//		Table[i] = GenerateSingleTestData<int>(1, 10);
//		cout << Table[i] << " ";
//	}
//	cout << "\n";
//#endif // DEBUG
//
//
//	int Dp[10001];
//	Dp[1] = Table[1];
//	Dp[2] = Table[1] + Table[2];
//	Dp[3] = max(Table[1] + Table[3], Table[2] + Table[3]);
//	Dp[4] = max(Dp[1] + Table[3] + Table[4], Dp[2] + Table[4]);
//
//	for (int i = 5; i <= N; ++i)
//		Dp[i] = max({ Dp[i - 4] + Table[i - 1] + Table[i], Dp[i - 3] + Table[i - 1] + Table[i], Dp[i - 2] + Table[i] });
//
//#ifdef DEBUG
//	Print(Dp, 1, N + 1);
//#endif // DEBUG
//
//	cout << max(Dp[N - 1], Dp[N]) << "\n";
//	return 0;
//}