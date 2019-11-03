//#include <iostream>
//#include <vector>
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
//void BFS(vector<int>(&Graph)[101], int N, int Start = 1)
//{
//	if (Start < 1 || Start > N)
//		return;
//
//	bool IsVisited[101] = { 0 };
//	queue<int> Queue;
//	for (const auto& it : Graph[Start])
//		if (IsVisited[it] == false)
//			Queue.push(it);
//
//	while (Queue.empty() == false)
//	{
//		int Next = Queue.front();
//		Queue.pop();
//
//		IsVisited[Next] = true;
//		for (const auto& it : Graph[Next])
//			if (IsVisited[it] == false)
//				Queue.push(it);
//	}
//
//	for (int i = 1; i <= N; ++i)
//		cout << IsVisited[i] << " ";
//	cout << "\n";
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	vector<int> Graph[101];
//	for (int i = 1; i <= N; ++i)
//	{
//		int IsConnected;
//		for (int j = 1; j <= N; ++j)
//		{
//			cin >> IsConnected;
//			if (IsConnected == 0)
//				continue;
//
//			Graph[i].push_back(j);
//		}
//	}
//
//	for (int i = 1; i <= N; ++i)
//		BFS(Graph, N, i);
//
//
//
//	return 0;
//}