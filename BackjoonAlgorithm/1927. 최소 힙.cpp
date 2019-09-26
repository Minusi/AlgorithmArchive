//#include <iostream>
//#include <queue>
//#include <functional>
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
//	int N;
//	cin >> N;
//	
//	priority_queue<int, vector<int>, greater<int>> MinHeap;
//
//	int Buffer;
//	int Pop;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Buffer;
//		if (Buffer != 0)
//			MinHeap.push(Buffer);
//		else
//		{
//			if (MinHeap.size() > 0)
//			{
//				cout << MinHeap.top() << "\n";
//				MinHeap.pop();
//			}
//			else
//				cout << 0 << "\n";
//		}
//	}
//
//
//	return 0;
//}