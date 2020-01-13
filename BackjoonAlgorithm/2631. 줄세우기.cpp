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
//	int Sequence[201];
//	for (int i = 1; i <= N; ++i)
//		cin >> Sequence[i];
//
//	int DP[201];
//	fill(DP + 0, DP + N + 1, 1);
//	int Max = 0;
//	for (int i = 2; i <= N; ++i)
//	{
//		for (int j = i - 1; j >= 1; --j)
//		{
//			if (Sequence[i] > Sequence[j])
//			{
//				DP[i] = max(DP[j] + 1, DP[i]);
//			}
//		}
//
//		Max = max(Max, DP[i]);
//	}
//
//#ifdef DEBUG
//	Print(DP, 1, N + 1);
//#endif // DEBUG
//
//	cout << N - Max << "\n";
//	return 0;
//}