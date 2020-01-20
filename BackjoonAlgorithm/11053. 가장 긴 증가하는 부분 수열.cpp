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
//	int Seq[1000];
//	for (int i = 0; i < N; ++i)
//		cin >> Seq[i];
//
//	int Dp[1000] = { 0, };
//	int Answer = 0;
//
//	Dp[0] = 1;
//	Answer = 1;
//
//	for (int i = 1; i < N; ++i)
//	{
//		int MaxIdx = i;
//		for (int j = 0; j <= i; ++j)
//		{
//			if (Seq[j] < Seq[i] && Dp[j] > Dp[MaxIdx])
//			{
//				MaxIdx = j;
//			}
//		}
//
//		Dp[i] = Dp[MaxIdx] + 1;
//		Answer = max(Answer, Dp[i]);
//	}
//
//#ifdef DEBUG
//	Print(Dp, 0, N);
//#endif // DEBUG
//
//
//	cout << Answer << "\n";
//	return 0;
//}