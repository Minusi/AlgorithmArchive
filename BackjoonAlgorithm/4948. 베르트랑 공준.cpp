//#include <iostream>
//#include <cstring>
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
//
//int InitSegment(bool(&Array)[246913], int(&Tree)[524289], int Start = 1, int End = 246913, int Node = 1)
//{
//	if (Start == End)
//		return Tree[Node] = Array[Start];
//
//	int Median = (Start + End) / 2;
//	return Tree[Node] = InitSegment(Array, Tree, Start, Median, Node * 2) + InitSegment(Array, Tree, Median + 1, End, Node * 2 + 1);
//}
//
//int Sum(int(&Tree)[524289], int MinRange, int MaxRange, int Start = 1, int End = 246913, int Node = 1)
//{
//	if (End < MinRange || MaxRange < Start)
//		return 0;
//
//	if (MinRange <= Start && End <= MaxRange)
//		return Tree[Node];
//
//	int Median = (Start + End) / 2;
//	return Sum(Tree, MinRange, MaxRange, Start, Median, Node * 2) + Sum(Tree, MinRange, MaxRange, Median + 1, End, Node * 2 + 1);
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	bool IsPrime[246913];
//	memset(IsPrime, true, sizeof(bool) * 246913);
//	IsPrime[0] = false;
//	IsPrime[1] = false;
//	for (int i = 2; i < 246913; ++i)
//	{
//		if (IsPrime[i] == false)
//			continue;
//
//		for (int j = i + i; j < 246913; j += i)
//			IsPrime[j] = false;
//	}
//
//	int Tree[524289];
//	InitSegment(IsPrime, Tree);
//
//	while (true)
//	{
//		cin >> N;
//		if (N == 0)
//			break;
//
//		cout << Sum(Tree, N + 1, N * 2) << "\n";
//	}
//
//	return 0;
//}