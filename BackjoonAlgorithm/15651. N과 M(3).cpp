//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//
//
///* nPm*/
//void DuplicatePermutation(const vector<int>& Array, vector<int>& Indices, int M)
//{
//	if (Indices.size() == M)
//	{
//		for (const auto& it : Indices)
//		{
//			cout << Array[it] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < Array.size(); ++i)
//	{
//		Indices.push_back(i);
//		DuplicatePermutation(Array, Indices, M);
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
//	
//
//	/* 배열 초기화 */
//	vector<int> Array;
//	Array.reserve(8);
//	for (int i = 0; i < N; ++i)
//	{
//		Array.push_back(i + 1);
//	}
//
//
//	vector<int> Indices;
//	DuplicatePermutation(Array, Indices, M);
//	return 0;
//}