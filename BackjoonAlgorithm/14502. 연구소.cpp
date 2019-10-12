//#include <iostream>
//#include <queue>
//#include <cstring>
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
//int Map[8][8];
//vector<pair<int, int>> Poisons;
//int NumZero = 0;
//int Max = -987654321;
//
//int N, M;
//
//
//void SpreadPoison(int NumSafeZone)
//{
//	int CpyMap[8][8];
//	memcpy(CpyMap, Map, sizeof(CpyMap));
//
//	//Print2Dimen(CpyMap, 7, 7);
//	static int dr[4] = { 0, 1, 0, -1 };
//	static int dc[4] = { 1,0,-1,0 };
//	
//	queue<pair<int, int>> Queue;
//	for (const auto& it : Poisons)
//		Queue.emplace(it);
//
//	while (Queue.empty() == false)
//	{
//		int cr = Queue.front().first;
//		int cc = Queue.front().second;
//		Queue.pop();
//
//		for (int i = 0; i < 4; ++i)
//		{
//			int pr = dr[i] + cr;
//			int pc = dc[i] + cc;
//
//			if (pr < 0 || pr >= N || pc < 0 || pc >= M)
//				continue;
//			
//			if (CpyMap[pr][pc] == 0)
//			{
//				CpyMap[pr][pc] = 2;
//				NumSafeZone--;
//				Queue.emplace(pr, pc);
//			}
//		}
//	}
//	
//	if (Max < NumSafeZone)
//		Max = NumSafeZone;
//}
//
//void ConstructWalls()
//{
//	for (int i = 0; i < N * M; ++i)
//	{
//		int ri = i / M; 
//		int ci = i % M;
//
//		if (Map[ri][ci] != 0)
//			continue;
//
//		for (int j = i + 1; j < N * M; ++j)
//		{
//			int rj = j / M;
//			int cj = j % M;
//
//			if (Map[rj][cj] != 0)
//				continue;
//
//			for (int k = j + 1; k < N*M; ++k)
//			{
//				int rk = k / M;
//				int ck = k % M;
//
//				if (Map[rk][ck] != 0)
//					continue;
//
//				Map[ri][ci] = Map[rj][cj] = Map[rk][ck] = 1;
//				SpreadPoison(NumZero - 3);
//				Map[ri][ci] = Map[rj][cj] = Map[rk][ck] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> Map[i][j];
//			if (Map[i][j] == 2)
//				Poisons.emplace_back(i, j);
//			else if (Map[i][j] == 0)
//				NumZero++;
//		}
//	}
//
//	ConstructWalls();
//
//	cout << Max << "\n";
//	return 0;
//}