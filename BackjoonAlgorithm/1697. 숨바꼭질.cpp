//#include <iostream>
//#include <utility>
//#include <queue>
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
//typedef int Pos;
//typedef int Sec;
//typedef pair<Pos, Sec> Info;
//Sec HideAndSeek(int Seeker, int Hider, bool(&Visit)[100001])
//{
//	queue<Info> TQueue;
//	TQueue.emplace(Seeker, 0);
//	Visit[Seeker] = true;
//
//
//	Info Current = { Seeker, 0 };
//	while (TQueue.empty() == false)
//	{
//		Current = TQueue.front();
//		TQueue.pop();
//
//		if (Current.first == Hider)
//			return Current.second;
//
//		if (Current.first + 1 <= 100000 && Visit[Current.first + 1] == false)
//		{
//			TQueue.emplace(Current.first + 1, Current.second + 1);
//			Visit[Current.first + 1] = true;
//		}
//		if (Current.first * 2 <= 100000 && Visit[Current.first * 2] == false)
//		{
//			TQueue.emplace(Current.first * 2, Current.second + 1);
//			Visit[Current.first * 2] = true;
//		}
//		if (Current.first - 1 >= 0 && Visit[Current.first - 1] == false)
//		{
//			TQueue.emplace(Current.first - 1, Current.second + 1);
//			Visit[Current.first - 1] = true;
//		}
//	}
//
//	return -1;
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, K;
//	cin >> N >> K;
//
//	bool Visited[100001] = { false, };
//	cout << HideAndSeek(N, K, Visited) << "\n";
//	return 0;
//}