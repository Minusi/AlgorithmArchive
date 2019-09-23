//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//
//int NQueen(bool (&Array)[15][15], int N, int Row = 0)
//{
//	if (Row >= N)
//		return 0;
//
//
//
//	int Count = 0;
//	bool IsSafe;
//	for (int i = 0; i < N; ++i)
//	{
//#ifdef DEBUG
//		cout << "R : " << Row << ", C : " << i << "\n";
//		for (int i = 0; i < N; ++i)
//		{
//			for (int j = 0; j < N; ++j)
//			{
//				cout << Array[i][j] << " ";
//			}
//			cout << "\n";
//		}
//		cout << "\n";
//#endif // DEBUG
//
//
//
//		IsSafe = true;
//
//		/* 세로 탐색 */
//		for (int j = 0; j < N; ++j)
//		{
//			if (Array[j][i] == true)
//			{
//				IsSafe = false;
//				break;
//			}
//		}
//		if (IsSafe == false)	continue;
//
//
//		/* 좌상단 탐색*/
//		for (int j = 0; (Row - j >= 0) && (i - j >= 0); ++j)
//		{
//			if (Array[Row - j][i - j] == true)
//			{
//				IsSafe = false;
//				break;
//			}
//		}
//		if (IsSafe == false)	continue;
//
//		/* 우상단 탐색 */
//		for (int j = 0; (Row - j >= 0) && (i + j < N); ++j)
//		{
//			if (Array[Row - j][i + j] == true)
//			{
//				IsSafe = false;
//				break;
//			}
//		}
//		if (IsSafe == false)	continue;
//		
//
//		/* N개의 퀸을 배치했으므로 가능한 수 1을 반환함. */
//		if (Row + 1 == N && IsSafe == true)
//		{
//#ifdef DEBUG
//			Array[Row][i] = true;
//			cout << "************** CLEAR **************\n";
//			cout << "R : " << Row << ", C : " << i << "\n";
//			for (int i = 0; i < N; ++i)
//			{
//				for (int j = 0; j < N; ++j)
//				{
//					cout << Array[i][j] << " ";
//				}
//				cout << "\n";
//			}
//			cout << "\n";
//			Array[Row][i] = false;
//#endif // DEBUG
//
//			Count++;
//		}
//		/* 상태 변화 */
//		Array[Row][i] = true;
//		Count += NQueen(Array, N, Row + 1);
//		/* 상태 되돌리기 */
//		Array[Row][i] = false;
//	}
//
//	return Count;
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	bool Board[15][15];
//	memset(Board, false, sizeof(bool) * 15 * 15);
//	int Result = NQueen(Board, N);
//
//	cout << Result << "\n";
//	return 0;
//}