//#include <iostream>
//#include <vector>
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
//	int N, M;
//	cin >> N >> M;
//	
//	vector<int> ConcatSeat;
//	int PrevVIP = 0;
//	int InVIP;
//	for (int i = 0; i < M; ++i)
//	{
//		cin >> InVIP;
//		ConcatSeat.push_back(InVIP - PrevVIP - 1);
//		PrevVIP = InVIP;
//	}
//	ConcatSeat.push_back(N - PrevVIP);
//
//	int DP[41] = { 0 };
//	DP[0] = DP[1] = 1;
//	for (int i = 2; i <= N; ++i)
//		DP[i] = DP[i - 1] + DP[i - 2];
//
//#ifdef DEBUG
//	Print(DP, 0, N + 1);
//#endif // DEBUG
//
//
//
//	int Answer = 1;
//	for (const auto& it : ConcatSeat)
//		Answer *= DP[it];
//	cout << Answer << "\n";
//	return 0;
//}