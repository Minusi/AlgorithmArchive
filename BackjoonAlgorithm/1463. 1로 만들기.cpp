//#include <iostream>
//#include <algorithm>
//
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
//int DPSolve(int N)
//{
//#define INF 987654321
//	static int Dp[1000000];
//	Dp[0] = INF;
//	Dp[1] = 0;
//
//
//	int Mod3, Mod2;
//	for (int i = 2; i <= N; ++i)
//	{
//		Mod3 = i % 3 == 0 ? i / 3 : i - 1;
//		Mod2 = i % 2 == 0 ? i / 2 : i - 1;
//		Dp[i] = min({ Dp[Mod3], Dp[Mod2], Dp[i - 1] }) + 1;
//	}
//
//#ifdef DEBUG
//	Print(Dp, 1, 1 + N);
//#endif // DEBUG
//
//
//	return Dp[N];
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
//	
//	cout << DPSolve(N) << "\n";
//	return 0;
//}