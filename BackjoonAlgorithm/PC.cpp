//#include <iostream>
//#include <algorithm>
//#include <utility>
//#include <vector>
//using namespace std;
//
//#define DEBUG
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
//static int MAX = -987654321;
//void Solve(vector<int>(&HGraph)[100001], int(&Embedding)[100001], int N, int Next, int Index, int Prev, int Depth)
//{
//	if (Depth > 3)
//	{
//		cout << "Embedding : " << Embedding[Next] << "\n";
//		cout << "Depth : " << Depth << "\n\n";
//
//		MAX = max(99, MAX);
//		return;
//	}
//	
//	cout << "Depth : " << Depth << "\n\n";
//	cout << "Embedding : " << Embedding[Next] << "\n";
//	if (Embedding[Next] == Index + 1)
//	{
//		MAX = max(Depth, MAX);
//		return;
//	}
//
//	
//	for (int i = 0; i < HGraph[Next].size(); ++i)
//	{
//		if(HGraph[Next][i] != Next)
//			Solve(HGraph, Embedding, N, HGraph[Next][i], Index, Next, Depth + 1);
//	}
//}
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
//	vector<int> HGraph[100001];
//	int Embedding[100001];
//	int Source[100001];
//	int Src, Dest;
//	
//	for (int i = 1; i <= N - 1; ++i)
//	{
//		cin >> Src >> Dest;
//		HGraph[Src].push_back(Dest);
//		HGraph[Dest].push_back(Src);
//	}
//
//	int Path;
//	for (int i = 1; i <= N; ++i)
//	{
//		cin >> Path;
//		Embedding[Path] = i;
//		Source[i] = Path;
//	}
//
//	Embedding[0] = 0;
//	for (int i = 1; i <= N - 1; ++i)
//	{
//		cout << "Source[]i : " << Source[i] << "\n";
//		Solve(HGraph, Embedding, N, Source[i], i, 0, 0);
//	}
//	cout << MAX << "\n";
//	return 0;
//}