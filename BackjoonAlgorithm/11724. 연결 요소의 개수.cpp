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
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> Graph[1001];
//	bool Visit[1001] = { 0 };
//	int NumConnectedComp = 0;
//
//	int A, B;
//	for (int i = 0; i < M; ++i)
//	{
//		cin >> A >> B;
//		Graph[A].push_back(B);
//		Graph[B].push_back(A);
//	}
//
//	queue<int> Queue;
//	for (int i = 1; i <= N; ++i)
//	{
//		if (Visit[i] == true)
//			continue;
//
//		NumConnectedComp++;
//		Queue.push(i);
//		while (Queue.empty() == false)
//		{
//			int Node = Queue.front();
//			Queue.pop();
//
//			if (Visit[Node] == true)
//				continue;
//
//			Visit[Node] = true;
//			for (size_t j = 0; j < Graph[Node].size(); ++j)
//			{
//				int Next = Graph[Node][j];
//				Queue.push(Next);
//			}
//		}
//	}
//
//	cout << NumConnectedComp << "\n";
//
//	return 0;
//}