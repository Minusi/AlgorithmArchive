//#include <iostream>
//#include <cstring>
//#include <queue>
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
//void Dfs(const bool(&Graph)[1001][1001], bool(&Visit)[1001], int N, int Start)
//{
//	vector<int> Stack;
//	Stack.push(Start);
//
//	int Top;
//	while (Stack.size() > 0)
//	{
//		Top = Stack.top();
//		Stack.pop();
//		if (Visit[Top] == true)
//			continue;
//
//		cout << Top << " ";
//		Visit[Top] = true;
//
//		for (int i = N; i >= 1; --i)
//		{
//			if (Graph[Top][i] == true)
//				Stack.push(i);
//		}
//	}
//	cout << "\n";
//}
//
//void Bfs(const bool(&Graph)[1001][1001], bool(&Visit)[1001], int N, int Start)
//{
//	queue<int> Queue;
//	Queue.push(Start);
//
//	int Front;
//	while (Queue.size() > 0)
//	{
//		Front = Queue.front();
//		Queue.pop();
//		if (Visit[Front] == true)
//			continue;
//
//		cout << Front << " ";
//		Visit[Front] = true;
//
//		for (int i = 1; i <= N; ++i)
//		{
//			if (Graph[Front][i] == true)
//				Queue.push(i);
//		}
//	}
//	cout << "\n";
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	int M;
//	cin >> M;
//	
//	int VStart;
//	cin >> VStart;
//
//	bool Graph[1001][1001] = { false , };
//	bool Visit[1001] = { false, };
//	int Src, Dest;
//	for (int i = 0; i < M; ++i)
//	{
//		cin >> Src >> Dest;
//		Graph[Src][Dest] = true;
//		Graph[Dest][Src] = true;
//	}
//
//
//
//	Dfs(Graph, Visit, N, VStart);
//	memset(Visit, false, sizeof(bool) * 1001);
//	Bfs(Graph, Visit, N, VStart);
//	return 0;
//}