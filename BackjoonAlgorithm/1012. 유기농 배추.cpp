//#include <iostream>
//#include <stack>
//#include <vector>
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
//void PutWorm(bool(&Farm)[50][50], bool(&Visit)[50][50], pair<int, int> Size, pair<int,int> Pos)
//{
//	const static pair<int, int> Dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	stack<pair<int, int>> Stack;
//	Stack.push(Pos);
//	Visit[Pos.first][Pos.second] = true;
//
//
//	pair<int, int> Dp;
//	while (Stack.empty() == false)
//	{
//		Pos = Stack.top();
//		Stack.pop();
//		for (int i = 0; i < 4; ++i)
//		{
//			Dp.first = Pos.first + Dir[i].first;
//			Dp.second = Pos.second + Dir[i].second;
//
//			if (Dp.first >= 0 && Dp.first < Size.first && Dp.second >= 0 && Dp.second < Size.second)
//			{
//				if (Farm[Dp.first][Dp.second] == true && Visit[Dp.first][Dp.second] == false)
//				{
//					Stack.push(Dp);
//					Visit[Dp.first][Dp.second] = true;
//				}
//			}
//		}
//	}
//
//#ifdef DEBUG
//	cout << "*************farm****************\n";
//	for (int i = 0; i < Size.first; ++i)
//	{
//		for (int j = 0; j < Size.second; ++j)
//		{
//			cout << Farm[i][j];
//		}
//		cout << "\n";
//	}
//	cout << "*************farm****************\n";
//#endif // DEBUG
//#ifdef DEBUG
//	cout << "*************visit****************\n";
//	for (int i = 0; i < Size.first; ++i)
//	{
//		for (int j = 0; j < Size.second; ++j)
//		{
//			cout << Visit[i][j];
//		}
//		cout << "\n";
//	}
//	cout << "*************visit****************\n";
//#endif // DEBUG
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	for (int tc = 1; tc <= T; ++tc)
//	{
//		int M, N, K;
//		cin >> M >> N >> K;
//
//
//		bool Farm[50][50] = { false, };
//		bool Visit[50][50] = { false, };
//		int Tx, Ty;
//		for (int i = 0; i < K; ++i)
//		{
//			cin >> Ty >> Tx;
//			Farm[Tx][Ty] = true;
//		}
//
//		int Sum = 0;
//		for (int i = 0; i < N; ++i)
//		{
//			for (int j = 0; j < M; ++j)
//			{
//				if (Farm[i][j] == true && Visit[i][j] == false)
//				{
//					PutWorm(Farm, Visit, make_pair(N, M), { i,j });
//					Sum++;
//				}
//			}
//		}
//
//		cout << Sum << "\n";
//	}
//
//	return 0;
//}