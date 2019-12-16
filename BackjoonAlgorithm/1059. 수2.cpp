//#include <iostream>
//#include <algorithm>
//#include <functional>
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
//	int L;
//	cin >> L;
//
//
//
//	/* get inputs and sort */
//	int LuckySet[51];
//	LuckySet[0] = 0;
//	for (int i = 1; i <= L; ++i)
//		cin >> LuckySet[i];
//	sort(LuckySet + 0, LuckySet + L + 1, less<int>());
//
//
//	int N;
//	cin >> N;
//
//	const int INF = 987654321;
//	int IdxLucky = -INF;
//	for (int i = 0; i < 50; ++i)
//	{
//		if (N == LuckySet[i])
//			break;
//
//		if (N < LuckySet[i])
//		{
//			IdxLucky = i - 1;
//			break;
//		}
//	}
//	
//	int Answer = 0;
//	if (IdxLucky != -INF)
//	{
//		int NumRhs = (LuckySet[IdxLucky + 1] - N) - 1;
//		int NumLhs = (NumRhs + 1) * (N - LuckySet[IdxLucky] - 1);
//
//		Answer = NumLhs + NumRhs;
//	}
//
//	cout << Answer << "\n";
//	return 0;
//}