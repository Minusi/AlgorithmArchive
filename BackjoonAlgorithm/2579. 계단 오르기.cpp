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
//	int Stairs[301];
//	int N;
//	cin >> N;
//	for (int i = 1; i <= N; ++i)
//		cin >> Stairs[i];
//
//	int Dp[301];
//	Dp[1] = Stairs[1];
//	Dp[2] = Stairs[1] + Stairs[2];
//	Dp[3] = max(Stairs[1] + Stairs[3], Stairs[2] + Stairs[3]);
//
//	for (int i = 4; i <= N; ++i)
//		Dp[i] = max(Dp[i - 3] + Stairs[i - 1] + Stairs[i], Dp[i - 2] + Stairs[i]);
//
//	cout << Dp[N] << "\n";
//
//	return 0;
//}