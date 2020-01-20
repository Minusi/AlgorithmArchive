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
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	int Array[100001];
//	for (int i = 1; i <= N; ++i)
//		cin >> Array[i];
//
//	int Dp[100001];
//	Dp[1] = Array[1];
//	int Answer = Dp[1];
//	for (int i = 2; i <= N; ++i)
//	{
//		Dp[i] = max(Dp[i - 1] + Array[i], Array[i]);
//		Answer = max(Answer, Dp[i]);
//	}
//
//	cout << Answer << "\n";
//	return 0;
//}