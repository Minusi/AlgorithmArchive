//#include <iostream>
//#include <algorithm>
//#include <cmath>
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
//struct MinAbs
//{
//	bool operator()(int lhs, int rhs)
//	{
//		if (abs(lhs) == abs(rhs))
//		{
//			return lhs > rhs;
//		}
//		else
//		{
//			return abs(lhs) > abs(rhs);
//		}
//	}
//};
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
//	priority_queue<int, vector<int>, MinAbs> AbsHeap;
//
//	int Buffer;
//	int Pop;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Buffer;
//		if (Buffer != 0)
//			AbsHeap.push(Buffer);
//		else
//		{
//			if (AbsHeap.size() > 0)
//			{
//				cout << AbsHeap.top() << "\n";
//				AbsHeap.pop();
//			}
//			else
//			{
//				cout << 0 << "\n";
//			}
//		}
//	}
//
//	return 0;
//}