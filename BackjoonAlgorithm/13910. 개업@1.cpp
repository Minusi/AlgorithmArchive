//#include <iostream>
//#include <set>
//#include <queue>
//#include <algorithm>	
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
//	int Woks[100];
//	for (int i = 0; i < M; ++i)
//		cin >> Woks[i];
//
//	set<int> TwoHandedWoks;
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			if (i == j)	continue;
//
//			if (0 <= Woks[i] && Woks[i] <= N)
//				TwoHandedWoks.emplace(Woks[i]);
//
//			int TwoHanded = Woks[i] + Woks[j];
//			if (0 <= TwoHanded && TwoHanded <= N)
//				TwoHandedWoks.emplace(Woks[i] + Woks[j]);
//		}
//	}
//#ifdef DEBUG
//	for (const auto& it : TwoHandedWoks)
//	{
//		cout << it << " ";
//	}
//	cout << "\n";
//#endif // DEBUG
//
//	bool Visit[10001] = { 0 };
//	queue<int> Queue;
//	Queue.emplace(N);
//	Visit[N] = true;
//
//	int NumBehavior = 0;
//	bool bFindAnswer = false;
//	while (Queue.empty() == false)
//	{
//		if (Visit[0] == true)
//		{
//			bFindAnswer = true;
//			break;
//		}
//
//		size_t Qsize = Queue.size();
//		for (int i = 0; i < Qsize; ++i)
//		{
//			int Curr = Queue.front();
//			Queue.pop();
//
//			for (const auto& it : TwoHandedWoks)
//			{
//				if (Curr - it < 0)
//					continue;
//
//				if (Visit[Curr - it] == true)
//					continue;
//
//				Visit[Curr - it] = true;
//				Queue.emplace(Curr - it);
//			}
//		}
//		NumBehavior++;
//	}
//
//	cout << (bFindAnswer ? NumBehavior : -1) << "\n";
//	return 0;
//}