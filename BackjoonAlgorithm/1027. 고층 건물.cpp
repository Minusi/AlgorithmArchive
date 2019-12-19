//#include <iostream>
//#include <utility>
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
//typedef pair<long long, long long> coord;
//int CCW(coord a, coord b, coord c)
//{
//	long long res = (b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second);
//	if (res > 0)		return 1;
//	else if (res == 0)	return 0;
//	else				return -1;
//}
//
//
//
//int IsIntersect(pair<coord, coord> SegA, pair<coord, coord> SegB)
//{
//	int AtoB = CCW(SegA.first, SegA.second, SegB.first) * CCW(SegA.first, SegA.second, SegB.second);
//	int BtoA = CCW(SegB.first, SegB.second, SegA.first) * CCW(SegB.first, SegB.second, SegA.second);
//
//	if (AtoB == 0 && BtoA == 0)
//	{
//		if (SegA.first > SegA.second)	swap(SegA.first, SegA.second);
//		if (SegB.first > SegB.second)	swap(SegB.first, SegB.second);
//		return SegB.first <= SegA.second && SegA.first <= SegB.second;
//	}
//
//	return AtoB <= 0 && BtoA <= 0;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	int Building[50];
//	int View[50] = { 0 };
//
//	for (int i = 0; i < N; ++i)
//		cin >> Building[i];
//
//	for (int i = 0; i < N; ++i)
//	{
//		pair<coord, coord> ViewSeg;
//		pair<coord, coord> BuildSeg;
//		for (int j = i - 1; j >= 0; --j)
//		{
//			ViewSeg = { {i,Building[i]}, {j, Building[j]} };
//			bool bCanView = true;
//			for (int k = i - 1; k > j; --k)
//			{
//				BuildSeg = { {k,0},{k,Building[k]} };
//				if (IsIntersect(ViewSeg, BuildSeg))
//				{
//					bCanView = false; break;
//				}
//			}
//			if (bCanView)
//			{
//				View[i]++;
//				//cout << "View[" << i << "]++ in " << j << "\n";
//			}
//		}
//
//		for (int j = i + 1; j < N; ++j)
//		{
//			ViewSeg = { {i,Building[i]}, {j, Building[j]} };
//			bool bCanView = true;
//			for (int k = i + 1; k < j; ++k)
//			{
//				BuildSeg = { {k,0},{k,Building[k]} };
//				if (IsIntersect(ViewSeg, BuildSeg))
//				{
//					bCanView = false; break;
//				}
//			}
//			if (bCanView)
//			{
//				View[i]++;
//				//cout << "View[" << i << "]++ in " << j << "\n";
//			}
//		}
//	}
//
//	int MaxIdx = -1;
//	int MaxView = -1;
//	for (int i = 0; i < N; ++i)
//	{
//		if (MaxView < View[i])
//		{
//			MaxIdx = i;
//			MaxView = View[i];
//		}
//	}
//
//	//Print(View, 0, N, N);
//	cout << MaxView << "\n";
//
//	return 0;
//}