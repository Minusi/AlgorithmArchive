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
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	int L;
//	pair<int, int> Start, End;
//
//	static int dr[8] = { -2,-1,1,2,2,1,-1,-2 };
//	static int dc[8] = { 1,2,2,1,-1,-2,-2,-1 };
//
//	while (T--)
//	{
//		cin >> L >> Start.first >> Start.second >> End.first >> End.second;
//		
//		int Visit[300][300] = { 0 };
//		queue<pair<int, int>> Queue;
//		Queue.emplace(Start.first, Start.second);
//		
//		
//		while (Queue.empty() == false)
//		{
//			pair<int, int> Current = Queue.front();
//			Queue.pop();
//			
//			if (End == Current)
//			{
//				cout << Visit[Current.first][Current.second] << "\n";
//				break;
//			}
//
//			for (int i = 0; i < 8; ++i)
//			{
//				pair<int, int> Next = { Current.first + dr[i], Current.second + dc[i] };
//				if (Next.first < 0 || Next.first >= L || Next.second < 0 || Next.second >= L)
//					continue;
//
//				if (Visit[Next.first][Next.second] != 0)
//					continue;
//
//				Visit[Next.first][Next.second] = Visit[Current.first][Current.second] + 1;
//				Queue.emplace(Next.first, Next.second);
//			}
//		}
//	}
//
//	return 0;
//}