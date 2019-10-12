//#include <iostream>
//#include <utility>
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
//#define MAX -987654321
//static int MaxValue = MAX;
//void Tetromino(bool(&Visit)[500][500], int(&Paper)[500][500], int N, int M, pair<int,int> (&Coords)[4], int Size = 1)
//{
//	if (Size == 4)
//	{
//		int Sum = 0;
//		for (int i = 0; i < 4; ++i)
//			Sum += Paper[Coords[i].first][Coords[i].second];
//
//		//for (const auto& it : Coords)
//		//{
//		//	cout << it.first << "," << it.second << "\n";
//		//}
//		//cout << "MV : " << MaxValue << ", SUM : " << Sum << "\n";
//		if (Sum > MaxValue)
//		{
//			MaxValue = Sum;
//		}
//		return;
//	}
//
//	static int dr[4] = { 0,1,0,-1 };
//	static int dc[4] = { 1,0,-1,0 };
//
//
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < Size; ++j)
//		{
//			int cr = Coords[j].first;
//			int cc = Coords[j].second;
//
//			int pr = dr[i] + cr;
//			int pc = dc[i] + cc;
//
//			if (pr < 0 || pr >= N || pc < 0 || pc >= M)
//				continue;
//
//			if (Visit[pr][pc] == true)
//				continue;
//
//			Visit[pr][pc] = true;
//			Coords[Size] = { pr,pc };
//			Tetromino(Visit, Paper, N, M, Coords, Size + 1);
//			Visit[pr][pc] = false;
//		}
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	bool Visit[500][500] = { false, };
//	int Paper[500][500];
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> Paper[i][j];
//		}
//	}
//
//	pair<int,int> Coords[4];
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			Visit[i][j] = true;
//			Coords[0] = { i,j };
//			Tetromino(Visit, Paper, N, M, Coords);
//			Visit[i][j] = false;
//		}
//	}
//
//	cout << MaxValue << "\n";
//	return 0;
//}