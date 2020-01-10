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
//	int Carriage[50001];
//	for (int i = 1; i <= N; ++i)
//		cin >> Carriage[i];
//
//	int Capacity;
//	cin >> Capacity;
//
//	int CusumArr[50001];
//	CusumArr[0] = 0;
//	for (int i = 1; i <= N; ++i)
//		CusumArr[i] = CusumArr[i - 1] + Carriage[i];
//
//
//
//	int DP[4][50001] = { 0 };
//	for (int i = 1; i <= 3; ++i)
//	{
//		for (int j = i * Capacity; j <= N; ++j)
//		{
//			if (i == 1)
//				DP[i][j] = max(DP[i][j - 1], CusumArr[j] - CusumArr[j - Capacity]);
//			else
//				DP[i][j] = max(DP[i][j - 1], DP[i - 1][j - Capacity] + CusumArr[j] - CusumArr[j - Capacity]);
//		}
//	}
//
//	cout << DP[3][N] << "\n";
//
//	return 0;
//}