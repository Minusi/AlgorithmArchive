//#include <iostream>
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
///*	이 문제는 4 이상의 N에 대해 
// *	N-1의 가능한 조합에 + 1을 붙이고
// *	N-2의 가능한 조합에 + 2를 붙이고
// *	N-3의 가능한 조합에 + 3을 붙이면, 모든 조합이 완성되므로
// *	dp[i] = dp[i-1] + dp[i-2] + dp[i-3]의 점화식을 만족한다.
// */
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	int dp[12];
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;
//
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		for (int i = 4; i <= N; ++i)
//			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//
//		cout << dp[N] << "\n";
//	}
//
//	return 0;
//}