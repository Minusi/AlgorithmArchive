//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//	/* 숫자 배열 */
//	int Nums[8];
//	for (int i = 0; i < N; ++i)
//	{
//		Nums[i] = i + 1;
//	}
//
//	vector<int> PrevArray;
//	vector<int> CurArray;
//	PrevArray.reserve(N);
//	CurArray.reserve(N);
//	do
//	{
//		/* nPr입니다. */
//		for (int i = 0; i < M; ++i)
//		{
//			CurArray.push_back(Nums[i]);
//		}
//
//		
//		/* 이전 순열과 이번 순열이 다르면 출력합니다. */
//		if (PrevArray != CurArray)
//		{
//			for (const auto& it : CurArray)
//			{
//				cout << it << " ";
//			}ㅇㅇ
//			cout << "\n";
//
//			PrevArray.clear();
//			PrevArray = CurArray;
//		}
//
//		CurArray.clear();
//	} while (next_permutation(Nums, Nums + N));
//	return 0;
//}