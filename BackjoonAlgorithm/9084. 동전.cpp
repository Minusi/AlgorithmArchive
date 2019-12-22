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
//	while (T--)
//	{
//		int N;
//		cin >> N;
//		
//		int Coins[20];
//		for (int i = 0; i < N; ++i)
//			cin >> Coins[i];
//
//		int M;
//		cin >> M;
//
//
//
//		int NumCases[10001] = { 0 };
//		NumCases[0] = 1;
//		for (int i = 0; i < N; ++i)
//			for (int j = Coins[i]; j <= M; ++j)
//				NumCases[j] += NumCases[j - Coins[i]];
//
//		cout << NumCases[M] << "\n";
//	}
//
//	return 0;
//}