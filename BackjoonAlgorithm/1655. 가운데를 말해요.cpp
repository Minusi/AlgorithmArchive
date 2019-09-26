//#include <iostream>
//#include <functional>
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
//	int N;
//	cin >> N;
//
//	priority_queue<int, vector<int>, less<int>> MaxHeap;
//	priority_queue<int, vector<int>, greater<int>> MinHeap;
//
//	int Buffer;
//	bool bMaxFlag = true;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Buffer;
//		if (bMaxFlag)
//			MaxHeap.push(Buffer);
//		else
//			MinHeap.push(Buffer);
//
//		if (MaxHeap.size() > 0 && MinHeap.size() > 0)
//		{
//			int Max, Min;
//			if (MaxHeap.top() > MinHeap.top())
//			{
//				Max = MaxHeap.top();
//				Min = MinHeap.top();
//				MaxHeap.pop();
//				MinHeap.pop();
//				MinHeap.push(Max);
//				MaxHeap.push(Min);
//			}
//		}
//
//		cout << MaxHeap.top() << "\n";
//		bMaxFlag = !bMaxFlag;
//	}
//	return 0;
//}