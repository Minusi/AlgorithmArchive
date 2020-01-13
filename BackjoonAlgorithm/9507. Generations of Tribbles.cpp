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
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	long long DP[68];
//	DP[0] = DP[1] = 1;
//	DP[2] = 2;
//	DP[3] = 4;
//	for (int i = 4; i <= 67; ++i)
//		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3] + DP[i - 4];
//
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		cout << DP[N] << "\n";
//	}
//
//	return 0;
//}