//#include <iostream>
//#include <cmath>
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
//int DPSolve(int N)
//{
//	static int Dp[101][11];
//	for (int i = 1; i <= 9; ++i)
//		Dp[1][i] = 1;
//
//	for (int i = 2; i <= N; ++i)
//	{
//		Dp[i][0] = Dp[i - 1][1];
//		for (int j = 1; j <= 9; ++j)
//		{
//			Dp[i][j] = (Dp[i - 1][j - 1] + Dp[i - 1][j + 1]) % 1000000000;
//		}
//	}
//
//	int Sum = 0;
//	for (int i = 0; i <= 9; ++i)
//		Sum = (Sum + Dp[N][i]) % 1000000000;
//
//	return Sum;
//}
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
//	cout << DPSolve(N) << "\n";
//	return 0;
//}