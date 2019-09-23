//#include <iostream>
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
//void NonDecreasingOrderedPermutation(int (&Array)[8], vector<int>& Indices, int N, int M)
//{
//	if (Indices.size() > M)
//		return;
//
//	if (Indices.size() == M)
//	{
//		for (int i = 0; i < M; ++i)
//		{
//			cout << Array[Indices[i]] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//
//	
//	int Init;
//	Init = Indices.size() == 0 ? 0 : Indices[Indices.size() - 1];
//	for (int i = Init; i < N; ++i)
//	{
//		Indices.push_back(i);
//		NonDecreasingOrderedPermutation(Array, Indices, N, M);
//		Indices.pop_back();
//	}
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int M;
//	cin >> M;
//
//	int Array[8];
//	for (int i = 0; i < N; ++i)
//	{
//		Array[i] = i + 1;
//	}
//	vector<int> Indices;
//	Indices.reserve(M);
//	NonDecreasingOrderedPermutation(Array, Indices, N, M);
//
//	return 0;
//}