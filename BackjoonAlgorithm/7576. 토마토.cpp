//#include <iostream>
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
//int TimePassess(int(&Tomato)[1000][1000], bool(&Visit)[1000][1000], pair<int, int> Size, queue<pair<int,int>> Queue, int NumImmature)
//{
//	static pair<int, int> Dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	pair<int, int> Pos, Dp;
//
//
//	int Result = 0;
//	while (Queue.empty() == false)
//	{
//		Pos = Queue.front();
//		Queue.pop();
//		
//		for (int i = 0; i < 4; ++i)
//		{
//			Dp.first = Pos.first + Dir[i].first;
//			Dp.second = Pos.second + Dir[i].second;
//			int& DpTomato = Tomato[Dp.first][Dp.second];
//			if (Dp.first >= 0 && Dp.first < Size.first && Dp.second >= 0 && Dp.second < Size.second)
//			{
//				//cout << "i,j : " << Propagate.first << "," << Propagate.second << " " << DpTomato << " " << Tomato[Pos.first][Pos.second] << "\n";
//				/* 아직 익지 않았거나, 익었지만 이전에 무르익게 한 날짜가 현재 날짜 + 1보다 작으면 이 날짜로 갱신한다. */
//				if ((DpTomato == 0 && Visit[Dp.first][Dp.second] == false)
//					|| (DpTomato > Tomato[Pos.first][Pos.second] + 1 && Visit[Dp.first][Dp.second] == true))
//				{
//					DpTomato = Tomato[Pos.first][Pos.second] + 1;
//					Result = DpTomato - 1;
//					Queue.emplace(Dp.first, Dp.second);
//					Visit[Dp.first][Dp.second] = true;
//					NumImmature--;
//#ifdef DEBUG
//					//Print2Dimen(Tomato, Size.first, Size.second);
//#endif // DEBUG
//
//				}
//			}
//		}
//	}
//	if (NumImmature > 0)	return -1;
//	else					return Result;
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
//	cin >> M >> N;
//
//
//#ifdef DEBUG
//	Start = chrono::system_clock::now();
//#endif // DEBUG
//
//	int Tomatos[1000][1000];
//	bool Visit[1000][1000] = { false, };
//	int NumImmature = 0;
//	queue<pair<int, int>> Queue;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; j++)
//		{
//#ifdef DEBUG
//			if ((i == 0 && j == 0) || (i == N - 1 && j == M - 1))
//				Tomatos[i][j] = 1;
//			else
//				Tomatos[i][j] = 0;
//#else
//			cin >> Tomatos[i][j];
//#endif // DEBUG
//
//			if (Tomatos[i][j] == 1)
//				Queue.emplace(i, j);
//			else if(Tomatos[i][j] == 0)
//				NumImmature++;
//		}
//	}
//
//	int Result = -1;
//	Result = TimePassess(Tomatos, Visit, { N,M }, Queue, NumImmature);
//	cout << Result << "\n";
//#ifdef DEBUG
//	Time = chrono::system_clock::now() - Start;
//	cout << Time.count() / 1000000000.0 << "\n";
//#endif // DEBUG
//
//	return 0;
//}