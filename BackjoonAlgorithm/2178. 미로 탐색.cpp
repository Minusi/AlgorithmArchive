//#include <iostream>
//#include <string>
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
//void EscapeMaze(int(&Maze)[100][100], bool(&Visit)[100][100], pair<int, int> Size, queue<pair<int,int>>& Queue)
//{
//	const static pair<int, int> Dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	static int DepthFlag[100][100] = { 0, };
//
//	if (Queue.empty())
//		return;
//
//	pair<int, int> Pos = Queue.front();
//	if (Pos == make_pair(Size.first - 1, Size.second - 1))
//	{
//		return;
//	}
//
//	//cout << "Pos : " << Pos.first << "," << Pos.second << "\n";
//
//	pair<int, int> Dp;
//	Queue.pop();
//	for (int i = 0; i < 4; ++i)
//	{
//		Dp.first = Pos.first + Dir[i].first;
//		Dp.second = Pos.second + Dir[i].second;
//
//		if (Dp.first >= 0 && Dp.first < Size.first && Dp.second >= 0 && Dp.second < Size.second)
//		{
//			if (Maze[Dp.first][Dp.second] != 0 && Visit[Dp.first][Dp.second] == false)
//			{
//				Queue.push(Dp);
//				Visit[Dp.first][Dp.second] = true;
//				Maze[Dp.first][Dp.second] = Maze[Pos.first][Pos.second] + 1;
//			}
//		}
//	}
//
//#ifdef DEBUG
//	Print2Dimen(Maze, Size.first, Size.second);
//#endif // DEBUG
//
//	EscapeMaze(Maze, Visit, Size, Queue);
//}
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
//	cin.ignore();
//
//	int Maze[100][100];
//	bool Visit[100][100] = { false, };
//	string Buffer;
//	for (int i = 0; i < N; ++i)
//	{
//		getline(cin, Buffer);
//		for (int j = 0; j < M; ++j)
//		{
//			Maze[i][j] = Buffer[j] - '0';
//		}
//	}
//
//	queue<pair<int, int>> Queue;
//	Queue.push({ 0,0 });
//	Visit[0][0] = true;
//	EscapeMaze(Maze, Visit, make_pair(N, M), Queue);
//	cout << Maze[N - 1][M - 1] << "\n";
//	return 0;
//}