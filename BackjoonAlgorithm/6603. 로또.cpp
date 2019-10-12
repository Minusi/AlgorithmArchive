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
//void Permutation(int (&Array)[12], int K, vector<int>& Indices)
//{
//	if (Indices.size() > 6)
//		return;
//
//
//
//	/* 출력 */
//	if (Indices.size() == 6)
//	{
//		for (int i = 0; i < 6; ++i)
//		{
//			cout << Array[Indices[i]] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//
//	/* 백트래킹 */
//	for (int i = Indices.size() == 0 ? 0 : Indices[Indices.size() - 1] + 1; i < K; ++i)
//	{
//		Indices.push_back(i);
//		Permutation(Array, K, Indices);
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
//	while (true)
//	{
//		int K;
//		cin >> K;
//
//		if (K == 0)
//			break;
//
//		int Lotto[12];
//		for (int i = 0; i < K; ++i)
//		{
//			cin >> Lotto[i];
//		}
//
//		vector<int> Indices;
//		Indices.reserve(6);
//		Permutation(Lotto, K, Indices);
//		cout << "\n";
//	}
//
//
//	return 0;
//}