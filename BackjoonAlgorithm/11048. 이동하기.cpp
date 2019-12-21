//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <utility>
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
//
//
//	int Maze[1001][1001];
//	for (int i = 0; i <= N; ++i)
//		Maze[i][0] = 0;
//	for (int j = 0; j <= M; ++j)
//		Maze[0][j] = 0;
//	for (int i = 1; i <= N; ++i)
//		for (int j = 1; j <= M; ++j)
//			cin >> Maze[i][j];
//
//
//	int MaxCandy[1001][1001];
//	for (int i = 0; i <= N; ++i)
//		MaxCandy[i][0] = 0;
//	for (int j = 0; j <= M; ++j)
//		MaxCandy[0][j] = 0;
//	bool Visit[1001][1001] = { false };
//
//
//
//	queue<pair<int,int>> Reserved;
//	Reserved.emplace(1, 1);
//	Visit[1][1] = true;
//	while (Reserved.empty() == false)
//	{
//		pair<int, int> Pos = Reserved.front();
//		Reserved.pop();
//
//		MaxCandy[Pos.first][Pos.second] = Maze[Pos.first][Pos.second]
//			+ max(max(MaxCandy[Pos.first - 1][Pos.second - 1], MaxCandy[Pos.first - 1][Pos.second]), MaxCandy[Pos.first][Pos.second - 1]);
//
//		if (Pos.first + 1 <= N && Visit[Pos.first + 1][Pos.second] == false)
//		{
//			Reserved.emplace(Pos.first + 1, Pos.second);
//			Visit[Pos.first + 1][Pos.second] = true;
//		}
//		if (Pos.second + 1 <= M && Visit[Pos.first][Pos.second + 1] == false)
//		{
//			Reserved.emplace(Pos.first, Pos.second + 1);
//			Visit[Pos.first][Pos.second + 1] = true;
//		}
//		if (Pos.first + 1 <= N && Pos.second + 1 <= M && Visit[Pos.first + 1][Pos.second + 1] == false)
//		{
//			Reserved.emplace(Pos.first + 1, Pos.second + 1);
//			Visit[Pos.first + 1][Pos.second + 1] = true;
//		}
//	}
//
//	cout << MaxCandy[N][M] << "\n";
//
//	return 0;
//}