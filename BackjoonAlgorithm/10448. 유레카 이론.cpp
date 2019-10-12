//#include <iostream>
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
//	int Triangles[36];
//	for (int i = 1; i < 36; ++i)
//	{
//		if (i % 2 == 0)
//			Triangles[i] = (i / 2) * (i + 1);
//		else
//			Triangles[i] = ((i + 1) / 2) * i;
//	}
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		bool bLoopBreak = false;
//		for (int i = 1; Triangles[i] <= N; ++i)
//		{
//			for (int j = 1; Triangles[j] <= N; ++j)
//			{
//				for (int k = 1; Triangles[k] <= N; ++k)
//				{
//					if (N == Triangles[i] + Triangles[j] + Triangles[k])
//					{
//						cout << 1 << "\n";
//						bLoopBreak = true;
//						break;
//					}
//				}
//				if (bLoopBreak)
//					break;
//			}
//			if (bLoopBreak)
//				break;
//		}
//
//		if (bLoopBreak == false)
//			cout << 0 << "\n";
//	}
//
//	return 0;
//}