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
//int DPSolve(int(&Cost)[1001][3], int N)
//{
//	static int Dp[1001][3];
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			if (i == 1)
//				Dp[i][j] = Cost[i][j];
//			else
//				Dp[i][j] = min(Dp[i - 1][(j + 1) % 3], Dp[i - 1][(j + 2) % 3]) + Cost[i][j];
//		}
//	}
//
//	return min({ Dp[N][0], Dp[N][1], Dp[N][2] });
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
//	int Cost[1001][3];
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			//Cost[i][j] = GenerateSingleTestData<int>(1, 30);
//			//cout << Cost[i][j] << " ";
//			cin >> Cost[i][j];
//		}
//		//cout << "\n";
//	}
//
//	cout << DPSolve(Cost, N) << "\n";
//	
//	return 0;
//}