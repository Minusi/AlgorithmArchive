//#include <iostream>
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
//char Board[2187][2187];
//void MakePattern(int N, int R = 0, int C = 0, bool bSpace = false)
//{
//	if (N == 1)
//	{
//		if (bSpace == false)
//			Board[R][C] = '*';
//		else
//			Board[R][C] = ' ';
//
//		return;
//	}
//	else
//	{
//		MakePattern(N / 3, R + 0, C + 0, bSpace);
//		MakePattern(N / 3, R + 0, C + N / 3, bSpace);
//		MakePattern(N / 3, R + 0, C + N * 2 / 3, bSpace);
//		MakePattern(N / 3, R + N / 3, C + 0, bSpace);
//		MakePattern(N / 3, R + N / 3, C + N / 3, true);
//		MakePattern(N / 3, R + N / 3, C + N * 2 / 3, bSpace);
//		MakePattern(N / 3, R + N * 2 / 3, C + 0, bSpace);
//		MakePattern(N / 3, R + N * 2 / 3, C + N / 3, bSpace);
//		MakePattern(N / 3, R + N * 2 / 3, C + N * 2 / 3, bSpace);
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	MakePattern(N);
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//			cout << Board[i][j];
//		cout << "\n";
//	}
//	
//	return 0;
//}