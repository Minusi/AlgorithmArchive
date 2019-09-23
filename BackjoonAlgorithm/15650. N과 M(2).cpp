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
//	/* 배열 초기화 */
//	int Array[8];
//	for (int i = 0; i < N; ++i)
//	{
//		Array[i] = i + 1;
//	}
//
//
//
//	/* 조합 마스크 초기화 */
//	vector<int> Masks;
//	Masks.reserve(N);
//	for (int i = 0; i < N - M; ++i)
//	{
//		Masks.push_back(0);
//	}
//	for (int i = 0; i < M; ++i)
//	{
//		Masks.push_back(1);
//	}
//
//
//	/* 역순으로 출력되는 조합 저장 */
//	int Result[120][8];
//	int Index1 = 0;
//	int Index2 = 0;
//	do
//	{
//		for (int i = 0; i < N ; ++i)
//		{
//			if (Masks[i] == 1)
//			{
//				Result[Index1][Index2++] = Array[i];
//			}
//		}
//		Index1++;
//		Index2 = 0;
//	} while (next_permutation(Masks.begin(), Masks.end()));
//
//
//	
//	/* 출력 */
//	for (int i = Index1 - 1; i >= 0; --i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cout << Result[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}