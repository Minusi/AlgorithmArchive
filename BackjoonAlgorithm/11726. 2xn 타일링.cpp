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
///*
// *	타일을 채우는 방법은 
// *	1x2 타일을 1개 세워서 2x1칸을 채우는 방법과
// *	2x1 타일을 2개 눕혀서 2x2칸을 채우는 방법이 있다.
// *
// *	따라서 3 이상의 n에 대해서
// *	n-1에서 채운 갯수에 단순히 1x2칸을 세우는 방법과
// *	n-2에서 채운 갯수에 2x2칸 2개를 눕히는 방법이 존재하므로
// *	dp[n] = dp[n-1] + dp[n-2]라는 점화식이 성립한다.
// */
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
//	int dp[1001];
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int i = 3; i <= N; ++i)
//		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
//
//	cout << dp[N] << "\n";
//
//	return 0;
//}