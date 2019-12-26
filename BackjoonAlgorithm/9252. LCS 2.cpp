//#include <iostream>
//#include <algorithm>
//#include <utility>
//#include <string>
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
//	string A, B;
//	cin >> B >> A;
//
//	int LCS2[1001][1001] = { 0 };
//	int MaxLCS = -1;
//	pair<int, int> Coord;
//	for (int i = 1; i <= A.length(); ++i)
//	{
//		for (int j = 1; j <= B.length(); ++j)
//		{
//			if (A[i - 1] == B[j - 1])
//			{
//				LCS2[i][j] = LCS2[i - 1][j - 1] + 1;
//				if (MaxLCS < LCS2[i][j])
//				{
//					MaxLCS = LCS2[i][j];
//					Coord = { i,j };
//				}
//			}
//			else					
//				LCS2[i][j] = max(LCS2[i][j - 1], LCS2[i-1][j]);
//		}
//	}
//
//	string ReversedAns;
//	while (LCS2[Coord.first][Coord.second] > 0)
//	{
//		int CurrNumLCS = LCS2[Coord.first][Coord.second];
//		if (LCS2[Coord.first][Coord.second - 1] == CurrNumLCS)
//			Coord.second -= 1;
//		else if (LCS2[Coord.first - 1][Coord.second] == CurrNumLCS)
//			Coord.first -= 1;
//		else if (LCS2[Coord.first - 1][Coord.second - 1] == (CurrNumLCS - 1))
//		{
//			Coord.first -= 1;
//			Coord.second -= 1;
//			ReversedAns += A[Coord.first];
//		}
//	}
//
//	cout << MaxLCS << "\n";
//	for (auto it = ReversedAns.crbegin(); it != ReversedAns.crend(); ++it)
//		cout << *it;
//	cout << "\n";
//	return 0;
//}